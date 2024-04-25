#include "SaveLabelJson.h"
#include<QDebug>


SaveLabelJson::SaveLabelJson(QObject *parent)
    : QThread{parent}
{

}

void SaveLabelJson::run()
{
    //当空的时候依旧需要保存，否则直接返回了，文件没有被覆盖，导致下一次出错
//    exec();
    SaveStructArrayToJson("LabelJson.json");
    qDebug()<<"被保存了";
}

void SaveLabelJson::SaveStructArrayToJson(const QString FileName) //把json数组保存到文件中
{


    QFile file(FileName);
    if(file.open(QIODevice::WriteOnly |QIODevice::Text)){
        StructArrayToJson();
        QJsonDocument jsonDoc(JsonArray);
        file.write(jsonDoc.toJson());
        file.close();
        return ;
    }

    qDebug()<<"文件在初始化label相关的json的时候打开失败了";

}

void SaveLabelJson::StructArrayToJson() //将list转化成json数组
{
    for(const ListControl *  One:list){
        QJsonObject OneObject;
        LabelInformation Information=One->Information;
        OneObject["CurrentNum"]=One->CurrentNum; //不能用Information中的currentNum
        OneObject["LineEdit"]=Information.LineEdit;
        OneObject["TextEdit"]=Information.TextEdit;
        //Information.CurrentNum这个information中的currentNum好像并没有用到噢
        //都是直接用本身的成员对象的,除非在更改信息的时候，或者显示对应信息的时候，才有用到过这个东西，但是在这里我们呢应该使用
        //它本身的成员
        OneObject["StarNumber"]=Information.StarNumber;
        JsonArray.append(OneObject);
    }
}

void SaveLabelJson::recvList(QList<ListControl *> list)
{
    this->list=list;
    qDebug()<<"list成功被接收到";
//    this->quit(); //保证被接收到

}
