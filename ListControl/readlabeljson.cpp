#include "readlabeljson.h"

ReadLabelJson::ReadLabelJson(QObject *parent)
    : QThread{parent}
{

}

void ReadLabelJson::run()
{
    LoadStructArrayFromJson("LabelJson.json");
    qDebug()<<"初始化完成";
}

void ReadLabelJson::LoadStructArrayFromJson(const QString FileName)
{
    QFile file(FileName);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        JsonData=file.readAll();
        QJsonDocument jsonDoc=QJsonDocument::fromJson(JsonData);
        // 将JSON文档转换为结构体数组
        JsonArray=jsonDoc.array();
        emit SendLabelJson(JsonArray);
        if(!JsonArray.isEmpty())
            qDebug()<<"发送完成";
        else
            qDebug()<<"根本为空，发送还‘；";

        file.close();
    }
}

