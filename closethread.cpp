#include "closethread.h"

CloseThread::CloseThread(QObject *parent)
    : QThread{parent}
{

}

void CloseThread::run()
{ //将其写入
    while(closeJson==nullptr||closeJson->track_PushButton_stat==-1)
    {
        QThread::msleep(500); //防止recv_json速度慢与线程,但是run必须在初始化json数据完毕后开始
    }
    QJsonObject jsonObject;
    QJsonDocument jsonDocument;
    QFile file("data.json");
    if(!file.open(QIODevice::WriteOnly|QIODevice::Text))
    {
        qDebug()<<"创建或者打开失败";
        return ;
    }
    jsonObject["time"]=closeJson->time; //会议持续时间
    jsonObject["rest_time"]=closeJson->rest_time; //会议休息时间
    jsonObject["Number_of_sessions"]=closeJson->Number_of_sessions; //会议的数量
    jsonObject["track_PushButton_state"]=closeJson->track_PushButton_stat; //默认这些状态是关着的，然后这些要进行一个连接label状态的
    jsonObject["AutoConverSation"]=closeJson->AutoConverSation;
    jsonObject["noticeButton"]=closeJson->noticeButton;
    jsonObject["Type"]=static_cast<int>(closeJson->Type);
    jsonDocument.setObject(jsonObject);
    file.write(jsonDocument.toJson());
    qDebug()<<closeJson->time<<" 保存为";
    qDebug()<<"type类型为"<<static_cast<int>(closeJson->Type);
    file.close();
    delete closeJson;
    closeJson=nullptr;
    qDebug()<<"绘画夸你夸你夸你呢";
    return ;
}

void CloseThread::recv_json(Init_Json json)
{
    closeJson=new Init_Json();
    closeJson->track_PushButton_stat=false;       //这个好像没有用吧？
    closeJson->AutoConverSation=json.AutoConverSation;
    closeJson->noticeButton=json.noticeButton;
    closeJson->Number_of_sessions=json.Number_of_sessions;
    closeJson->rest_time=json.rest_time;
    closeJson->time=json.time;
    closeJson->track_PushButton_stat=json.track_PushButton_stat;
    closeJson->Type=json.Type;
}
