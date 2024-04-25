/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：轮播图，使用双向循环链表思想，并使用Qt
 * 的动画组，然后对五张图片进行移动,如下所示
 * 1，2，3，4，5分别对应五个Label中的五个图片
 * 1的Label的坐标和大小，被2和5指向，即若向右移动
 * 则1的大小和位置变为2的大小和位置，2的位置变为3的
 * 大小和位置，依次类推
 * 若向左移动，则1的大小和位置则变为5的大小和位置，
 * 5的大小和位置则变为4的大小和位置，依次类推
 * 1 -> 2 -> 3 -> 4 -> 5 -> 1
 * 1 <- 2 <- 3 <- 4 <- 5 <- 1
 * 若不理解，课查看数据结构双向循环链表
 * ***************************************/
#include "bannacontrol.h"
#include "ui_bannacontrol.h"
#include<QDebug>
// 构造函数
BannaControl::BannaControl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BannaControl)
{
    ui->setupUi(this);
    this->initValue();



}

// 析构函数
BannaControl::~BannaControl()
{
    delete changeImageTimer;
    for(auto x:bannaDataList)
    {
        delete x.proAnimation;
    }
    delete ui;
}

// 初始化数据
void BannaControl::initValue() //注意，每个部分都是同时进行的!!
{
    this->setWindowFlags(Qt::FramelessWindowHint);      //这个好像并没有什么影响,把它删除了我看也没什么影响好像，不过确实最好还是删掉
    changeImageTimer = new QTimer(this);
    connect(changeImageTimer, SIGNAL(timeout()), this, SLOT(slot_changeImageTimer())); //还没看这里的函数
    changeImageTimer->setInterval(BannaSpace::INTERVAL_TIMER); //设置定时器间隔时长
    changeImageTimer->start(); //开始计时间

    buttonGroup.addButton(ui->pushButtonFirst);
    buttonGroup.addButton(ui->pushButtonSecond);
    buttonGroup.addButton(ui->pushButtonThird);
    buttonGroup.addButton(ui->pushButtonFourth);
    buttonGroup.addButton(ui->pushButtonFifth);

    ui->labelThird->raise();
    ui->labelFifth->lower(); //可是有一个疑问，按道理其他第一张应该也要有一个层级关系的吧？
//    ui->labelFirst->lower(); 设置了这个，依旧可以正常，所以说明应该后面执行了相同的内容
    //ui->labelFifth->lower();： 这一行代码将 labelFifth 部件降低到其所在父容器的堆叠顺序的最底层。
    //与 raise() 相反，这个操作会确保 labelFifth 处于最后面，被其他可能在它下面的部件所覆盖。

    {
        BannaData bannaData;
        bannaData.pushButton = ui->pushButtonFirst; //可以将ui的按钮指针给到自己定义的指针。
        bannaData.currentImageLabel = ui->labelFirst;
        bannaData.nextImageLabel = ui->labelSecond;
        bannaData.preImageLabel = ui->labelFifth;
        bannaData.proAnimation = new QPropertyAnimation(ui->labelFirst, BannaSpace::ANIMATION_GEOMETRY);
        //QByteArray ANIMATION_GEOMETRY = "geometry"
        //proAnimation是用于改变对象属性值的动画类
        bannaDataList.append(bannaData); //然后就放入双向链表里面
    } //这里append后不会将这个bannaData删除，底层是引用


    {
        BannaData bannaData;
        bannaData.pushButton = ui->pushButtonSecond;
        bannaData.currentImageLabel = ui->labelSecond;
        bannaData.nextImageLabel = ui->labelThird;
        bannaData.preImageLabel = ui->labelFirst;
        bannaData.proAnimation = new QPropertyAnimation(ui->labelSecond, BannaSpace::ANIMATION_GEOMETRY);
        bannaDataList.append(bannaData);
    }


    {
        BannaData bannaData;
        bannaData.pushButton = ui->pushButtonThird;
        bannaData.currentImageLabel = ui->labelThird;
        bannaData.nextImageLabel = ui->labelFourth;
        bannaData.preImageLabel = ui->labelSecond;
        bannaData.proAnimation = new QPropertyAnimation(ui->labelThird, BannaSpace::ANIMATION_GEOMETRY);
        bannaDataList.append(bannaData);
    }


    {
        BannaData bannaData;
        bannaData.pushButton = ui->pushButtonFourth;
        bannaData.currentImageLabel = ui->labelFourth;
        bannaData.nextImageLabel = ui->labelFifth;
        bannaData.preImageLabel = ui->labelThird;
        bannaData.proAnimation = new QPropertyAnimation(ui->labelFourth, BannaSpace::ANIMATION_GEOMETRY);
        bannaDataList.append(bannaData);
    }


    {
        BannaData bannaData;
        bannaData.pushButton = ui->pushButtonFifth;
        bannaData.currentImageLabel = ui->labelFifth;
        bannaData.nextImageLabel = ui->labelFirst;
        bannaData.preImageLabel = ui->labelFourth;
        bannaData.proAnimation = new QPropertyAnimation(ui->labelFifth, BannaSpace::ANIMATION_GEOMETRY);
        bannaDataList.append(bannaData);
    }

    for(int i = 0; i < bannaDataList.size(); i++)
    {
        bannaDataList.at(i).currentImageLabel->installEventFilter(this);
        //安装事件过滤器,当 currentImageLabel 接收到事件时,将首先传递给当前对象的事件过滤器进行处理，
        //然后再传递给 currentImageLabel 本身
        bannaDataList.at(i).proAnimation->setDuration(BannaSpace::ANIMATION_DURTION); //设置动画时长
        bannaDataList.at(i).proAnimation->setEasingCurve(QEasingCurve::BezierSpline); //设置缓动曲线
        //通过设置缓动曲线，你可以调整动画的开始、结束和中间过程中的速度变化
        //可以更平滑的过度，我试过了，看着没那么卡
        animationGroup.addAnimation(bannaDataList.at(i).proAnimation); //把它放到并行动画组里面
    }


    QList<QString> listImagePath;
    listImagePath.append(BannaSpace::FIRST_IMAGE_PATH); //添加图片
    listImagePath.append(BannaSpace::SECOND_IMAGE_PATH);
    listImagePath.append(BannaSpace::THIRD_IMAGE_PATH);
    listImagePath.append(BannaSpace::FOURTH_IMAGE_PATH);
    listImagePath.append(BannaSpace::FIFTH_IMAGE_PATH);
    this->addAnimationPixmap(listImagePath);

    ui->pushButtonLeft->raise();
    ui->pushButtonRight->raise();

    //如果有两个label，都用了raise这个方法
    //在这个例子中，label2会覆盖label1，因为后调用的raise方法会将窗口部件置于父窗口的顶部，覆盖之前调用的raise方法的效果。


}

// 为轮播图添加图片
void BannaControl::addAnimationPixmap(QList<QString> &listPixmap)
{
    if(listPixmap.size() != bannaDataList.size()) return; //防止意外情况发生

    for(int i = 0; i < bannaDataList.size(); i++)
    {
        //STYLE_SHEET是  "border-image:url(%1)"; ，因为指向的是ui指针，固然可以对这个ui界面的进行一个样式的设置
        //这种好处就是可以做到自己手动的向ui界面去添加图片了，而在ui界面中添加样式，那么可能就写死了，即灵活性
        QString styleSheet = BannaSpace::STYLE_SHEET.arg(listPixmap.at(i));
        bannaDataList.at(i).currentImageLabel->setStyleSheet(styleSheet);
    }
}

// 每3S进行一次动画操作
void BannaControl::slot_changeImageTimer()
{
    if(animationGroup.state() != QParallelAnimationGroup::Running)
    { //如果此时的状态并不是running，那么就播放下一个，否则如果删除这个就会出错
        //因为如果你手动正在切换，那么就说明在播放，但是此时又到点了，那么就进行了一个切换
        //就会直接出错
        this->setNextAnimation();
    }
}

// 向左移动
void BannaControl::on_pushButtonLeft_clicked()
{
    if(animationGroup.state() != QParallelAnimationGroup::Running)
    {
        this->setPreAnimation();
    }
}

// 向右移动
void BannaControl::on_pushButtonRight_clicked()
{
    if(animationGroup.state() != QParallelAnimationGroup::Running)//没了这个就又会重叠
    //还不知道是什么原因
    {
        this->setNextAnimation();
    }
}

// 获取最右边的Label的Index
int BannaControl::getMaxGeometryIndex(const QList<BannaData> &listData)
{
    //我对这里的理解就是这个轮番图，它一直会变化，但是它这个list并没有变化，即一直都是按照1 2 3 4 5这样排列的
    //但是每张图的位置由于是变化的，固然1 2 3 4 5的图片的x坐标并不是按照顺序来的,所以这样子找到了最右边
    int maxPosX = 0;
    int maxIndex = 0;
    for(int i = 0; i < listData.size(); i++)
    {
        int geometryX = listData.at(i).currentImageLabel->geometry().x();
        if(maxPosX < geometryX)
        {
            maxPosX = geometryX;
            maxIndex = i;
        }
    }
    return maxIndex;
}

// 图层排序
void BannaControl::sortGeometry(const bool &isNextFlage)
{
    /******************************************
     * 思路：
     * 将五张图片进行排序，根据其移动后的位置
     * 来确定哪个图层在上，哪个图层在下
     * lower函数 将图层沉下去
     * raise函数 将图层浮上来
     * *****************************************/
    QList<BannaData>listData = bannaDataList;
    QLabel *topImageLabel = nullptr;
    int countNumber = 0;
    while(!listData.isEmpty())
    {
        int index = getMaxGeometryIndex(listData); //获取最右边的图片在list中所对应的下标
        if(index < listData.size()) //这个应该也没事？，但是为了更好的健壮性
        {
            switch (countNumber)    //这段没看，难
            //为什么和countNumber这个有关系？
            //为什么设置了其他值4，然后--就不行了？我以为是对称的思想
            {
            case BannaSpace::SORT_FIRST:
            {
                listData.at(index).currentImageLabel->lower();
                break;
            }
            case BannaSpace::SORT_SECOND:
            {
                if(isNextFlage)
                {
                    topImageLabel = listData.at(index).currentImageLabel;
                    listData.at(index).pushButton->setChecked(true);//在这里设置了按钮的点击状态，设置为选中状态
                    //由于一组按钮中只能选择一个按钮的点击状态，固然当这个按钮被选择的时候，之前被选中的哪一个就被
                    //变成非选中状态了
                }
                listData.at(index).currentImageLabel->raise();
                break;
            }
            case BannaSpace::SORT_THIRD:
            {
                listData.at(index).currentImageLabel->raise();
                break;
            }
            case BannaSpace::SORT_FOURTH:
            {
                if(!isNextFlage)
                {
                    topImageLabel = listData.at(index).currentImageLabel;
                    listData.at(index).pushButton->setChecked(true); //在这里设置了按钮的点击状态
                }
                listData.at(index).currentImageLabel->lower();
                break;
            }
            case BannaSpace::SORT_FIFTH:
            {
                if(!isNextFlage)
                {
                    listData.at(index).currentImageLabel->raise();
                }
                else
                {
                    listData.at(index).currentImageLabel->lower();
                }
                break;
            }
            }
            listData.removeAt(index);
        }
        countNumber++;
    }

    if(topImageLabel)
    {
        topImageLabel->raise();
    }
    ui->pushButtonLeft->raise();
    ui->pushButtonRight->raise();
}

// 设置向右移动动画
void BannaControl::setNextAnimation()
{
    for(int i = 0; i < bannaDataList.size(); i++)
    {
        bannaDataList.at(i).proAnimation->setStartValue(bannaDataList.at(i).currentImageLabel->geometry());
        bannaDataList.at(i).proAnimation->setEndValue(bannaDataList.at(i).preImageLabel->geometry());
        //通过调用 geometry() 方法，你可以获取到 currentImageLabel 控件的当前位置和大小。
        //这里就是说从原本的位置到达末尾的位置，用动画来实现
    }// animationGroup这个是动画组，不是按钮组
    animationGroup.start(); //同时开始执行
    this->sortGeometry(true);
}

// 设置向左移动动画
void BannaControl::setPreAnimation()
{
    for(int i = 0; i < bannaDataList.size(); i++)
    {
        bannaDataList.at(i).proAnimation->setStartValue(bannaDataList.at(i).currentImageLabel->geometry());
        bannaDataList.at(i).proAnimation->setEndValue(bannaDataList.at(i).nextImageLabel->geometry());
    }
    animationGroup.start();
    this->sortGeometry(false);
}

