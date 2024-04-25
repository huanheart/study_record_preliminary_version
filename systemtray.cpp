#include "systemtray.h"
#include<QDesktopServices> //翻译为桌面服务
#include<QUrl>


SystemTray::SystemTray(QWidget *parent)
    : QSystemTrayIcon{parent}  //{}这里的这个改成()都一样是初始化列表的
 {
    this->createAction(); //创建托盘菜单
    this->addAction();
}

void SystemTray::addAction()    //在创建系统托盘的那个东西，我也可以做到双击托盘，然后也做到显示窗口的作用
{
    myMenu->addAction(showWidget);
    myMenu->addAction(minWidget);
    myMenu->addAction(aboutSoftWare);
    myMenu->addAction(exitSoftWare);
}


void SystemTray::createAction()
{
    myMenu=new QMenu();
    showWidget =new QAction(tr("显示窗口"),this);
//这个tr是一个宏
//    在使用 tr 宏的地方，你可以使用 Qt 的国际化工具，如 lupdate 和 linguist，来提取这些字符串并生成翻译文件。
//        然后，你可以提供每种语言的翻译，使得你的应用程序可以根据用户的语言设置显示相应的文本。
    minWidget=new QAction(tr("隐藏窗口"),this);
    aboutSoftWare=new QAction(tr("关于软件"),this);
    exitSoftWare=new QAction(tr("退出软件"),this);
    this->setIcon(QIcon(GlobalSpace::SYSTEM_PHOTO));
    this->setToolTip(tr("Study_record"));

    connect(exitSoftWare,SIGNAL(triggered(bool)),qApp,SLOT(quit())); //请求应用程序退出
    connect(aboutSoftWare,SIGNAL(triggered(bool)),this,SLOT(aboutSlot()));
    this->setContextMenu(myMenu);
    this->show();
}

QAction *SystemTray::getShowWidget() const //这里用到了javaBean类的思想
{
    return showWidget;
}

QAction *SystemTray::getMinWidget() const
{
    return minWidget;
}

QAction *SystemTray::getAboutSoftWare() const
{
    return aboutSoftWare;
}

void SystemTray::aboutSlot()
{
    qDebug("关于软件");
    QDesktopServices::openUrl(QUrl("https://github.com/huanheart")); //https://www.example.com
}
