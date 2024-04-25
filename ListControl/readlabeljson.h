#ifndef READLABELJSON_H
#define READLABELJSON_H

#include <QThread>
#include"Global.hpp"
#include"ListControl/listcontrol.h"



class ReadLabelJson : public QThread
{
    Q_OBJECT
public:
    explicit ReadLabelJson(QObject *parent = nullptr);

    friend class ListWidget; //这种不需要像class ListWidget这种声明，因为它本身就是一种声明,并不用包含对应的头文件


protected:
    void run() override;

private:
    void LoadStructArrayFromJson(const QString FileName);


private:
    QList<ListControl*> list;   //这个list是私有的，但是我可以弄一个友元，使得listWidget可以得到这个list
    QByteArray JsonData;
    QJsonArray JsonArray;


signals:
    void SendLabelJson(QJsonArray JsonArray);


};

#endif // READLABELJSON_H
