#include "windowsplay.h"

WindowsPlay::WindowsPlay(QObject *parent)
    : QThread{parent}
{
    this->FinishPlayer =new QMediaPlayer(this); //对象树
    FinishPlayer->setMedia(QUrl::fromLocalFile("FinishMusic.wav"));
    //初始化会议结束后的内容,如果打包后给别人，则这个文件的相对路径得进行一个改变
}

void WindowsPlay::run()
{
    SetCurrentProcessVolume(100,true,false);
    FinishPlayer->play();
    sleep(3);       //因为总共有3秒钟这个音乐
    SetCurrentProcessVolume(80,true,true);

}

WINBOOL WindowsPlay::SetCurrentProcessVolume(DWORD dwVolume, WINBOOL IsMixer, bool DecideDown)
{
    HRESULT hr = S_OK;

    IMMDeviceCollection* pMultiDevice = NULL;

    IMMDevice* pDevice = NULL; //具体的音频设备

    IAudioSessionEnumerator* pSessionEnum = NULL;
    //IAudioSessionManager2用于管理音频会话的高级功能
    IAudioSessionManager2* pASManager = NULL;
    //解释1，2的关系通过会话枚举器，你可以获取设备上每个会话的详细信息，如会话状态、
    // 进程ID、音量等。IAudioSessionEnumerator 通常是通过
    // IAudioSessionManager2 接口的方法获取的。


    //用于枚举和获取音频设备（比如扬声器、麦克风等）的实例。
    IMMDeviceEnumerator* m_pEnumerator = NULL;
    //下面这两个const，是com中用于标识接口的唯一标识符
    //COM（Component Object Model）是一种微软提出的面向组件的编程模型
    const IID IID_ISimpleAudioVolume = __uuidof(ISimpleAudioVolume);
    // 这个标识符对应的是 ISimpleAudioVolume接口
    //它是用于获取和设置音频会话的音量的接口
    const IID IID_IAudioSessionControl2 = __uuidof(IAudioSessionControl2);
    //它是用于获取和控制音频会话的高级功能的接口，
    //包括获取进程ID、注册会话状态变更事件等。


    GUID m_guidMyContext; //用于存储一个唯一标识符。

    CoInitialize(NULL); //用于初始化当前线程以使用COM
    //必须和另外一个CoUninitialize();一起调用
    hr = CoCreateGuid(&m_guidMyContext);
    if (FAILED(hr))
        return FALSE;
    // 获取音频端点设备的枚举器。
    hr = CoCreateInstance(__uuidof(MMDeviceEnumerator),
                          NULL, CLSCTX_ALL,
                          __uuidof(IMMDeviceEnumerator),
                          (void**)&m_pEnumerator);
    //第一个参数__uuidof(MMDeviceEnumerator)是 MMDeviceEnumerator
    //类型的类标识符 表示要创建的类型
    //第三个参数CLSCTX_ALL，表示运行对象的上下文
    //表示在所有可能的上下文中查找(本地服务器、远程服务器、内嵌服务器等)。
    //第四个参数是请求接口类型
    //第五个参数是由谁来接收，即创建了一个实例，然后m_pEnumerator就指向这个
    //接口
    if (FAILED(hr))
        return FALSE;

    if (IsMixer)
    {                                         //即输出音频设备，扬声器这种
        hr = m_pEnumerator->EnumAudioEndpoints(eRender, DEVICE_STATE_ACTIVE, &pMultiDevice);
    }
    else
    {                                       //输入音频设备
        hr = m_pEnumerator->EnumAudioEndpoints(eCapture, DEVICE_STATE_ACTIVE, &pMultiDevice);
    }
    //第二个参数 DEVICE_STATE_ACTIVE 表示仅枚举处于激活状态的设备。
    //枚举结果将存储在第三个参数pMultiDevice 中。
    if (FAILED(hr))
        return FALSE;

    UINT deviceCount = 0;
    hr = pMultiDevice->GetCount(&deviceCount);
    //获取有多少个被捕获了，即有多少个存放到这里了
    if (FAILED(hr))
        return FALSE;

    if ((int)dwVolume < 0)
        dwVolume = 0;
    if ((int)dwVolume > 100)
        dwVolume = 100;   //设置音量
    for (UINT ii = 0; ii < deviceCount; ii++)
    {
        pDevice = NULL;
        //获取第 ii 个音频设备,
        //并将该设备的接口指针存储在 pDevice这个音频设备中
        hr = pMultiDevice->Item(ii, &pDevice);
        //从一个集合中拿出一个音频设备
        if (FAILED(hr))
            return FALSE;
        hr = pDevice->Activate(__uuidof(IAudioSessionManager), CLSCTX_ALL, NULL, (void**)&pASManager);
        //通过调用 Activate 函数，使用 IAudioSessionManager 的标识符
        //__uuidof(IAudioSessionManager)，在指定的上下文 (CLSCTX_ALL) 中激活该
        //设备的会话管理器。激活成功后，相关的接口指针将存储在 pASManager 中,
        //以便后续的操作。
        //通过音频会话管理器，可以获取会话枚举器，进而遍历和管理与
        // 该设备相关的音频会话。这是为了处理与音频设备关联的多个音频流。
        //枚举器的作用上面定义的时候有说

        if (FAILED(hr))
            return FALSE;
        //音频设备的会话管理器 (IAudioSessionManager2) 中获取与该设备关联
        //的音频会话的枚举器，并将结果存储在 pSessionEnum 变量中。
        hr = pASManager->GetSessionEnumerator(&pSessionEnum);
        //前面已经激活了管理器了
        if (FAILED(hr))
            return FALSE;
        int nCount;
        hr = pSessionEnum->GetCount(&nCount);
        //一个音频设备可能有多个音频会话,所以要获取对应的数量
        for (int i = 0; i < nCount; i++)
        {
            IAudioSessionControl* pSessionCtrl;
            hr = pSessionEnum->GetSession(i, &pSessionCtrl);
            //从这个集合中拿出会话

            if (FAILED(hr))
                continue;
            IAudioSessionControl2* pSessionCtrl2;
            hr = pSessionCtrl->QueryInterface(IID_IAudioSessionControl2, (void**)&pSessionCtrl2);
            //如果 QueryInterface 调用成功，pSessionCtrl2
            //将包含 IAudioSessionControl2 接口的指针
            //IAudioSessionControl2前面有讲过包括获取进程ID、注册会话状态变更事件等。

            if (FAILED(hr))
                continue;
            ULONG pid;
            hr = pSessionCtrl2->GetProcessId(&pid);
            //获取进程id
            if (FAILED(hr))
                continue;

            ISimpleAudioVolume* pSimplevol;
            hr = pSessionCtrl2->QueryInterface(IID_ISimpleAudioVolume, (void**)&pSimplevol);
            //ISimpleAudioVolume 接口提供了简单的音量控制功能，
            //允许你设置和获取与音频会话相关联的音频流的主音量。通过获取
            //ISimpleAudioVolume 接口的实例，你可以使用它提供的方法来调整音频会话的音量。
            //赋值给了pSimplevol
            if (FAILED(hr))
                continue;
            if (pid == GetCurrentProcessId())
            {
                pSimplevol->SetMasterVolume((float)dwVolume / 100, NULL);
            }
            else
            {
                if(DecideDown==false)
                {
                    pSimplevol->SetMasterVolume((float)5 / 100, NULL);
                }
                else
                {
                    pSimplevol->SetMasterVolume((float)80 / 100, NULL);
                }
            }
            //会判断使用这个函数的是哪一个程序，让哪一个程序不禁用音乐
            //让其他的程序禁用音乐
        }
    }
    SAFE_RELEASE(m_pEnumerator);
    //SAFE_RELEASE 是一个宏，通常用于释放 COM 接口指针
    return TRUE;
}








