#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include<QJsonDocument>
#include<QFile>
#include<QJsonObject>
#include<Global.hpp>

class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(QObject *parent = nullptr);

protected:
    void run() override;

private:
    Init_Json My_Json;
signals:
    void ConveyJson(Init_Json json);

};

#endif // MYTHREAD_H
