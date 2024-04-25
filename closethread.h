#ifndef CLOSETHREAD_H
#define CLOSETHREAD_H

#include <QThread>
#include<QJsonDocument>
#include<QFile>
#include<QJsonObject>
#include<Global.hpp>

class CloseThread : public QThread
{
    Q_OBJECT

public:
    explicit CloseThread(QObject *parent = nullptr);

protected:
    void run() override;

private:
    Init_Json *closeJson;

public slots:
    void recv_json(Init_Json json);
signals:

};

#endif // CLOSETHREAD_H
