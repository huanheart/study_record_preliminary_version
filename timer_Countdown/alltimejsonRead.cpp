#include "alltimejsonRead.h"

AllTimeJsonRead::AllTimeJsonRead(QObject *parent)
    : QThread{parent}
{

}

void AllTimeJsonRead::run()
{
    LoadHashMap("AllTimeJson.json");




    return ;
}

void AllTimeJsonRead::LoadHashMap(QString FileName)
{
    QFile file(FileName);
    if(!file.open(QIODevice::ReadOnly |QIODevice::Text)){
        qDebug()<<"读取时间json表失败，返回";
        return ;
    }
    QByteArray jsonData=file.readAll();
    file.close();
    QJsonDocument doc=QJsonDocument::fromJson(jsonData);
    if(!doc.isArray()){
        qDebug()<<"这个内容并不是一个数组";
        return ;
    }
    QJsonArray jsonArray=doc.array();
    for (const QJsonValue& jsonValue : jsonArray) {
        if (jsonValue.isObject()) {
            QJsonObject jsonObject = jsonValue.toObject();

            QString innerKey = jsonObject["Innerkey"].toString();
            QJsonArray timeArray = jsonObject["TimeArray"].toArray();

            for (const QJsonValue& timeValue : timeArray) {
                if (timeValue.isObject()) {
                    QJsonObject timeObject = timeValue.toObject();
                    QString Date = timeObject["Date"].toString();
                    int time = timeObject["Time"].toInt();
                    LabelHash[innerKey][Date]+=time;
                    qDebug() << "Date:" << Date << "Time:" << time;
                }
            }
        }
    }
    emit SendTimeHashMap(LabelHash);

}
