#ifndef EXCELWIDGET_H
#define EXCELWIDGET_H

#include <QWidget>
#include<QListView>
#include"Global.hpp"
#include"components/qtmaterialtextfield.h"
#include"timer_Countdown/time_record.h"
#include"CylinderControl/cylinderwidget.h"
#include"Excel/excelexport.h"

namespace Ui {
class ExcelWidget;
}

class ExcelWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ExcelWidget(QWidget *parent = nullptr);
    ~ExcelWidget();
    void SetCylinderWidget(CylinderWidget* c);


private:
    Ui::ExcelWidget *ui;
    CylinderWidget* c;

    QString CurrentDateTimeString;
    QString FiveDaysDateString;
    QString FirstUseTime;
    QDateTime CurrentDateTime;
    QDateTime FiveForwardTime;
    QDateTime FiveBackwardTime;
    QDateTime FirstTime;
    ExcelExport *ExportThread=nullptr;
    bool AllExport=false;

private:

    void init();
protected:
    void paintEvent(QPaintEvent * event);

public slots:
    void InitTime();

private slots:

    void on_forward_clicked();
    void on_backward_clicked();
    void on_Delete_clicked();
    void on_AllExport_clicked();
    void on_NowExport_clicked();
};

#endif // EXCELWIDGET_H
