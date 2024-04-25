#ifndef MYDOCKWIDGET_H
#define MYDOCKWIDGET_H

#include <QDockWidget>
#include<QVBoxLayout>

#include"CylinderControl/docklabelcontrol.h"

class  CylinderWidget;
namespace Ui {
class MyDockWidget;
}

class MyDockWidget : public QDockWidget
{
    Q_OBJECT
    friend class CylinderWidget;
public:
//    using QDockWidget::QDockWidget;   //使用继承构造函数,使用不到，我直接在构造函数中调用父类的构造函数了
    explicit MyDockWidget(const QString &title=QString("详细信息标签"),QWidget *parent=nullptr,Qt::WindowFlags flags=Qt::WindowFlags()=Qt::WindowFlags());
    explicit MyDockWidget(QWidget *parent=nullptr);
    ~MyDockWidget();

private:
    Ui::MyDockWidget *ui;
    QVBoxLayout * m_vboxLayout=nullptr;


private:
    void DeleteDockLabel();
    void AddWidgetTom_vboxLayout(DockLabelControl *dockLabel);
};

#endif // MYDOCKWIDGET_H
