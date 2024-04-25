#ifndef PROGESSSON_H
#define PROGESSSON_H

#include"timer_Countdown/progess.h"

class ProgessSon : public Progess
{
    Q_OBJECT
public:
    explicit ProgessSon(QWidget *parent = nullptr);

signals:


public slots:
    void setCircleProgressBar(int value,int remain_time);
    void Session_setCircleProgressBar(int value);
};

#endif // PROGESSSON_H
