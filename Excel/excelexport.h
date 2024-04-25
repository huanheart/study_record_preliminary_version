#ifndef EXCELEXPORT_H
#define EXCELEXPORT_H

#include <QThread>
#include<QDebug>
#include<QAxObject>
#include<QDir>
#include<QDateTime>


#include"Global.hpp"


class ExcelExport : public QThread
{
    Q_OBJECT
public:
    explicit ExcelExport(QObject *parent = nullptr);
    void SetGroupType(enum GroupingType Grouping_type);
    void SetFileName(QString FilaName);
    void SetLabelHash(QHash<QString,QHash<QString,long long> >  LabelHash);
    void SetTime(QDateTime FiveDaysDateString,QDateTime CurrentDateTimeString,bool AllExport);
protected:
    void run()override;

private:
    QString FileName;
    enum GroupingType Grouping_type=GroupingType::LabelGroup;
    QHash<QString,QHash<QString,long long> >  LabelHash;
    QHash<QString,QHash<QString,long long> >  TimeHash;
    QDateTime FiveDaysDateString;
    QDateTime CurrentDateTimeString;
    QStringList headers={"标签名","对应日期","持续时长","",""};
    bool AllExport;
    //这里到时候还会弄一个文件格式的枚举
private:
    void exportToExcel();
    void NoGroup(QAxObject *sheet);
    void LabelGroup(QAxObject *sheet);
    void WeekGroup(QAxObject *sheet);
    void SetTimeHash();
    inline QString Convert(long long Time) const
    {
        int hour=Time/3600;
        int minute=(Time%3600)/60;
        int seconds=(Time%3600)%60;
        return QString::number(hour)+"小时"+QString::number(minute)+"分"+QString::number(seconds)+"秒";
    }




public slots:



signals:
    void Finish();
    void UnFinish();
};

#endif // EXCELEXPORT_H
