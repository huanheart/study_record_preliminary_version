#ifndef ALLTIMEJSONWRITE_H
#define ALLTIMEJSONWRITE_H

#include <QThread>
#include<QHash>
#include<QString>
#include"Global.hpp"


class AllTimeJsonWrite : public QThread
{
    Q_OBJECT
public:
    explicit AllTimeJsonWrite(QObject *parent = nullptr);

protected:
    void run()override;

public slots:
    void Receive_to_allTimeJsonWrite(QHash<QString,QHash<QString,long long> >  LabelHash);

private:
    QHash<QString,QHash<QString,long long> >  LabelHash;
    bool SuccessfullyReceived=false;
    QJsonArray OutArray; //外部json数组

private:
    void ToJsonArray();
    void SaveJson(QString FileName);

signals:

};

#endif // ALLTIMEJSONWRITE_H
