#ifndef ALLTIMEJSONREAD_H
#define ALLTIMEJSONREAD_H

#include <QThread>
#include<QHash>
#include<QString>



#include"Global.hpp"


class AllTimeJsonRead : public QThread
{
    Q_OBJECT
public:
    explicit AllTimeJsonRead(QObject *parent = nullptr);

protected:
    void run()override;


private:
    QHash<QString,QHash<QString,long long> >  LabelHash;



private:
    void LoadHashMap(QString FileName);

signals:
    void SendTimeHashMap(QHash<QString,QHash<QString,long long> >  LabelHash);
};


#endif // ALLTIMEJSONREAD_H
