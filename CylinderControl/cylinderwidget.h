#ifndef CYLINDERWIDGET_H
#define CYLINDERWIDGET_H

#include <QWidget>

#include<QRect>
#include<QVBoxLayout>
#include<QList>
#include<QDateTime>
#include<QSettings>
#include<QTimer>
#include<QVector>
#include<QScrollArea>

#include"CylinderControl/mydockwidget.h"
#include"CylinderControl/docklabelcontrol.h"
#include"timer_Countdown/time_record.h"

class ExcelWidget;
namespace Ui {
class CylinderWidget;
}

class CylinderWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CylinderWidget(QWidget *parent = nullptr);
    ~CylinderWidget();
   friend class Time_record;    //这个应该可以不用了
    friend class ExcelWidget;

public:
    void SetTime_record(Time_record *t);

protected:
    void paintEvent(QPaintEvent *event) override;

public slots:
    void InitChart();

private slots:

    void on_pushButton_clicked();

    void on_forward_clicked();

    void on_backward_clicked();

    void on_refresh_clicked();

signals:
    void CurrentTime_ToRecordTime(QDateTime CurrentDateTime);
    void InitTime();


private:

    Ui::CylinderWidget *ui;
    MyDockWidget *dock=nullptr;



    QList<DockLabelControl*> DockList;
    QString CurrentDateTimeString;
    QString FiveDaysDateString;
    QString FirstUseTime;
    QDateTime CurrentDateTime;
    QDateTime FiveForwardTime;
    QDateTime FiveBackwardTime;
    QDateTime FirstTime;
    Time_record *t;



private:
    void SetValue(QDateTime FirstTime);
    void DeleteDockLabel();
    void initValue();
    void dockInit();
    void addDockControl(QString CurrentDate, QString LabelName, int Time);
};

#endif // CYLINDERWIDGET_H
