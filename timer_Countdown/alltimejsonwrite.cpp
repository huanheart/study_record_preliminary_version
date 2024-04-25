#include "alltimejsonwrite.h"
#include<QDebug>


AllTimeJsonWrite::AllTimeJsonWrite(QObject *parent)
    : QThread{parent}
{

}

void AllTimeJsonWrite::run()
{
    while(SuccessfullyReceived==false){ //不能用这个手段，来保证这个labelHash是一定有执行

    } //保证我的信息被拿到，其实可以不用一个变量，也可以使用quit以及事件循环的，此时我就是用这个方法
    //下面开始写这个二维哈希

    SaveJson("AllTimeJson.json");

}



void AllTimeJsonWrite::Receive_to_allTimeJsonWrite(QHash<QString, QHash<QString, long long> > LabelHash)
{
    this->LabelHash=LabelHash;
    SuccessfullyReceived=true;

}

void AllTimeJsonWrite::ToJsonArray()
{
    for( auto it =LabelHash.begin();it!=LabelHash.end();++it)
    {
        QJsonObject InnerObject;
        QJsonArray InnerArray;
        InnerObject["Innerkey"]=it.key();
        for( auto InnerIt=it.value().begin();InnerIt!=it.value().end();++InnerIt)
        {
            QJsonObject  Innermost;
            Innermost["Date"]=InnerIt.key();
            Innermost["Time"]=InnerIt.value();
            InnerArray.append(Innermost);
        }
        InnerObject["TimeArray"]=InnerArray;
        OutArray.append(InnerObject);
    }

}

void AllTimeJsonWrite::SaveJson(QString FileName)
{

    QFile file(FileName);
    if(file.open(QIODevice::WriteOnly |QIODevice::Text)){
        ToJsonArray();
        QJsonDocument jsonDoc(OutArray);
        file.write(jsonDoc.toJson());
        file.close();
        qDebug()<<"正常保存";
        return ;
    }
}
