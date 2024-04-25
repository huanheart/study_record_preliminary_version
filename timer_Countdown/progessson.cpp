#include "progessson.h"

ProgessSon::ProgessSon(QWidget *parent)
    : Progess{parent}
{

}

void ProgessSon::setCircleProgressBar(int value, int remain_time)
{
    QString text;
    qreal  tmpValue=value/60;
    qreal  tmpValue_2=value%60;
    if(tmpValue<10)
    {
        text="0"+QString::number(tmpValue,'f',0)+":";
    }
    else
    {
        text=QString::number(tmpValue,'f',0)+":";
    }
    if(tmpValue_2<10)
    {
        text=text+"0"+QString::number(tmpValue_2,'f',0);
    }
    else
    {
        text=text+QString::number(tmpValue_2,'f',0);
    }
    if(remain_time<0)
        remain_time=1; //防止负数的出现
    //    qDebug()<<"改了吗"<<remain_time;
    //    qDebug()<<"改了吗"<<remain_time;
    this->setProgressValue(remain_time);
    this->setText(text);
}

void ProgessSon::Session_setCircleProgressBar(int value)
{
    QString text;
    qreal  tmpValue=value/60;
    qreal  tmpValue_2=value%60;
    if(tmpValue<10)
    {
        text="0"+QString::number(tmpValue,'f',0)+":";
    }
    else
    {
        text=QString::number(tmpValue,'f',0)+":";
    }
    if(tmpValue_2<10)
    {
        text=text+"0"+QString::number(tmpValue_2,'f',0);
    }
    else
    {
        text=text+QString::number(tmpValue_2,'f',0);
    }
    this->setProgressValue(0);
    this->setText(text);
}
