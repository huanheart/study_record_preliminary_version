#include "docklabelcontrol.h"
#include "ui_docklabelcontrol.h"

DockLabelControl::DockLabelControl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DockLabelControl)
{
    ui->setupUi(this);
}

DockLabelControl::~DockLabelControl()
{
    delete ui;
}

void DockLabelControl::setValue(QString CurrentDate, QString LabelName, int Time)
{
    ui->CurrentTime->setText(CurrentDate);
    ui->LabelName->setText(LabelName);
    int hour=Time/3600;
    int minute=(Time%3600)/60;
    int seconds=(Time%3600)%60;
    ui->Time->setText(QString::number(hour)+"<font color='#FFA500'>小时</font>"+QString::number(minute)+"<font color='#FFA500'>分</font>"+QString::number(seconds)+"<font color='#FFA500'>秒</font>");
    //使用富文本来做到部分字体有颜色

}
