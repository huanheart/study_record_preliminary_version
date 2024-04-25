#ifndef DOCKLABELCONTROL_H
#define DOCKLABELCONTROL_H

#include <QWidget>
#include<QString>


namespace Ui {
class DockLabelControl;
}

class DockLabelControl : public QWidget      //这个类是放到dockwidget上的，显示对应每天对应数据
{
    Q_OBJECT

public:
    explicit DockLabelControl(QWidget *parent = nullptr);
    ~DockLabelControl();
    void setValue(QString CurrentDate,QString LabelName,int Time);
private:



    Ui::DockLabelControl *ui;
};

#endif // DOCKLABELCONTROL_H
