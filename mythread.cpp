#include "mythread.h"
#include<QDebug>
MyThread::MyThread(QObject *parent)
    : QThread{parent}
{

}

void MyThread::run()
{
    QJsonObject jsonObject;
    QJsonDocument jsonDocument;
    QFile file("data.json");
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text)){
        //change_time=300; //默认是300s，即5分钟
        qDebug()<<"说明没有这个文件,那就创建一个";
        if(!file.open(QIODevice::WriteOnly|QIODevice::Text))
        {
            qDebug()<<"创建失败";
            return ;
        }
        jsonObject["time"]=300; //会议持续时间
        jsonObject["rest_time"]=300; //会议休息时间
        jsonObject["Number_of_sessions"]=4; //会议的数量
        jsonObject["track_PushButton_state"]=false; //默认这些状态是关着的，然后这些要进行一个连接label状态的
        jsonObject["AutoConverSation"]=false;
        jsonObject["noticeButton"]=false;
        jsonDocument.setObject(jsonObject);
        qDebug()<<jsonObject["time"].toDouble()<<"yes";
        file.write(jsonDocument.toJson());
        file.close();
//        return ;
    }
    //到这里了，说明原本就有这个文件，那么直接读取内容

    //现在进行一个读取
    QByteArray jsonData=file.readAll();
    file.close();
    QJsonParseError parseError;
    jsonDocument=QJsonDocument::fromJson(jsonData,&parseError);
    if(parseError.error!=QJsonParseError::NoError){
        qDebug()<<"Failed to parse JSON data. Error（解析json数据失败) 原因: "<<parseError.errorString();
            return ;
    }
    jsonObject=jsonDocument.object(); //读取json对象
    My_Json.AutoConverSation=jsonObject["AutoConverSation"].toBool();
    My_Json.noticeButton=jsonObject["noticeButton"].toBool();
    My_Json.track_PushButton_stat=jsonObject["track_PushButton_state"].toBool();
    My_Json.time=jsonObject["time"].toDouble();
    My_Json.Number_of_sessions=jsonObject["Number_of_sessions"].toDouble();
    My_Json.rest_time=jsonObject["rest_time"].toDouble();
    My_Json.Type=static_cast<ClockType>(jsonObject["Type"].toInt());
    Init_Json Copy_json=My_Json; //临时对象
    emit ConveyJson(Copy_json);
}
