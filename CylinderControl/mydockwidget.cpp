#include "mydockwidget.h"
#include "ui_mydockwidget.h"
#include<QDebug>


MyDockWidget::MyDockWidget(const QString &title,QWidget *parent,Qt::WindowFlags flags) :
    QDockWidget(title,parent,flags),
    ui(new Ui::MyDockWidget)
{
    ui->setupUi(this);
    this->setWindowTitle(title);  //由于此时是ui界面类了，所以传给dockWidget设置其内容是没有用的，所以此时就得在ui界面初始化完毕之后再设置才有效
    this->setMinimumSize(431,300);
    this->setMaximumSize(431,300);
    ui->scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

MyDockWidget::MyDockWidget(QWidget *parent):
    QDockWidget(parent),
    ui(new Ui::MyDockWidget)
{
    ui->setupUi(this);
    this->setMinimumSize(431,300);
    this->setMaximumSize(431,300);
    ui->scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

MyDockWidget::~MyDockWidget()
{
    delete ui;
}

void MyDockWidget::DeleteDockLabel()
{
    if(m_vboxLayout==nullptr)
    {

        m_vboxLayout=new QVBoxLayout(ui->scrollAreaWidgetContents);   //不能在构造函数中进行new，因为没有那么快到这个类的构造函数，固然在这里判断
        m_vboxLayout->setSpacing(0);
    }//scrollAreaWidgetContents     scrollArea    ui->scrollAreaWidgetContents


    if(m_vboxLayout->count()>0)        //这里的顺序可能得换一下
    {

        while(QLayoutItem *item=m_vboxLayout->takeAt(0))
        {

            if(item->widget()->parent()!=nullptr)  //要把原先的父对象给改变了
            {
                item->widget()->setParent(nullptr);
            }
            m_vboxLayout->removeWidget(item->widget());    //先移除
        }
    }

}

void MyDockWidget::AddWidgetTom_vboxLayout(DockLabelControl *dockLabel)
{
    if(dockLabel==nullptr)
    {
        qDebug()<<"这根本是空着的”";
        return ;
    }
    m_vboxLayout->addWidget(dockLabel);
}





