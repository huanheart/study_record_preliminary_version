#ifndef SAVELABELJSON_H
#define SAVELABELJSON_H

#include <QThread>
#include<QList>
#include<QJsonArray>
#include"ListControl/listcontrol.h"
#include<Global.hpp>


class SaveLabelJson : public QThread
{
    Q_OBJECT
public:
    explicit SaveLabelJson(QObject *parent = nullptr);



protected:
    void run()override;



private:
    QList<ListControl*> list;
    QJsonArray JsonArray;

private:
    void SaveStructArrayToJson(const QString FileName);
    void StructArrayToJson();


public slots:
    void recvList(QList<ListControl*> list);

signals:

};

#endif // SAVELABELJSON_H
