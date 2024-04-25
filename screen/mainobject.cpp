#include "mainobject.h"
#include"widget.h"
#include"splashscreen.h"
#include<QDebug>


MainObject::MainObject(QObject *parent)
    : QObject{parent}
{

}

MainObject::~MainObject()
{
    delete m_mainWindow;
}

void MainObject::setInit()
{
    SplashScreen *m_instance= SplashScreen::getInstance();
    m_instance->getInstance()->setStagePercent(0,tr("初始化应用程序 ..."));
    m_mainWindow = new Widget(nullptr);
    m_mainWindow->setWindowTitle(tr("QCoolPage")); //有没有都一个样
    m_instance->setStart(m_mainWindow, tr("QCoolPage1"), QString(":/res/res/image/image.png")); //这里的这个图片好像设置了没啥用
    m_instance->setStagePercent(40, tr("初始化主界面 ...")); //它好像一开始就显示来了这个初始化页面了，但是为什那么是40呢？ //解答，变成0-40
    m_instance->setStagePercent(80, tr("加载界面 ..."));
    m_instance->setStagePercent(100, tr("加载完毕！"));
    m_instance->setFinish();
}
