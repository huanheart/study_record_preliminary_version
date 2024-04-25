#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
#include<QApplication>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->initValue();

}

Widget::~Widget()
{
    delete ui;
}



void Widget::initValue()
{
    this->setWindowTitle(tr("WorkingHours"));
    syetemTray=new SystemTray(this);


    this->setWindowFlags(Qt::FramelessWindowHint);
//    this->setWindowFlags(Qt::CustomizeWindowHint);//有了这个就可以保留拉伸的效果了


    this->setMinimumSize(1108,647);
    this->setMaximumSize(1108,647);
    QApplication::setWindowIcon(QIcon(GlobalSpace::TASK_BAR)); //设置任务栏图标
    //在这里进行一个枚举绑定,用于切换页面的


    connect(ui->widgetTree,SIGNAL(sendShowIndex(WidgetTabType)),ui->widgetTab,SLOT(receiveShowCurrentTab(WidgetTabType)));
    connect(ui->widgetTree,&controltreewidget::Please_hideLabelWidget,ui->widgetTab,&controltabwidget::To_hideLabelWidget);
    connect(this,&Widget::change_size,ui->widgetTab,&controltabwidget::change);
    connect(this,&Widget::change_size,ui->widgetTree,&controltreewidget::change);
    connect(syetemTray->getShowWidget(),SIGNAL(triggered(bool)),this,SLOT(showNormal()));
    connect(syetemTray->getMinWidget(),SIGNAL(triggered(bool)),this,SLOT(showMinimized())); //隐藏

    this->setAttribute(Qt::WA_TranslucentBackground);
}

void Widget::resizeEvent(QResizeEvent *event)
{
    Q_UNUSED(event);
    ui->column->resize(this->width(),60); //手动调整标题栏大小
    emit change_size(this->width(),this->height());
}



void Widget::paintEvent(QPaintEvent *event)
{
    QStylePainter painter(this);
    QStyleOption opt;
    opt.initFrom(this);
    opt.rect = rect();
    painter.drawPrimitive(QStyle::PE_Widget, opt);
    QWidget::paintEvent(event);
}



void Widget::ChangeSize()
{
//    emit change_size(this->width(),this->height());
}

