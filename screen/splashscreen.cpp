#include "splashscreen.h"
#include<QPainter>
#include<QTimer>
#include<QApplication>
#include <QGuiApplication>
#include <QDebug>


//SplashScreen::SplashScreen(QObject *parent)
//    : QObject{parent}
//{

//}

SplashScreen *SplashScreen::m_instance=nullptr;
//这里不能改成饿汉模式，原因就是会使用到QPixmap，但是静态对象又是在QGuiApplication之前创建的
//QGuiApplication，它依赖这个玩意，固然所以不是所有情况都是能饿汉的


SplashScreen::SplashScreen(const QPixmap &pixmap)
    :QSplashScreen(pixmap)
    ,m_percent(0)
    ,m_mainWidget(nullptr)
    ,m_propertyAnimation(nullptr)
{

}

SplashScreen::~SplashScreen()
{

}

// 单例模式中的懒汉模式，用到了才new这个对象，节省内存空间，但是这种不好，因为如果在多线程中，这种得加锁了
SplashScreen *SplashScreen::getInstance()
{
    if(m_instance==nullptr)
    {
        m_instance=new SplashScreen(QPixmap("://Photo/splash.png"));
    }
    return m_instance;
}

void SplashScreen::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    //Q_UNUSED 是 Qt 中的一个宏，用于避免编译器发出未使用变量的警告。
    //它通常用于标记某些参数在函数中没有被使用，以防止编译器产生未使用变量的警告。
    const int OFFSET_VALUE = 70;
    const int SLIDER_HEIGHT = 10;
    const int BORDER_X_RADIUS = 8;
    const int BORDER_Y_RADIUS = 4;
    //        Q_UNUSED(BORDER_Y_RADIUS); //如果BORDER_Y_RADIUS不想使用，可以这么写
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    //的抗锯齿渲染选项。抗锯齿是一种图形渲染技术，用于减少图形边缘的锯齿状或走样现象，使图形看起来更加平滑和精细。
    QFont font(QString("微软雅黑"));
    QPen painterPen;
    painterPen.setColor(Qt::white);
    painter.setPen(painterPen);
    QBrush brush(QColor(100, 100, 100 ,255));
    painter.setBrush(brush);
    //绘制圆角矩形
    painter.drawRoundedRect(OFFSET_VALUE, this->height() - OFFSET_VALUE
                            ,(this->width()- OFFSET_VALUE * 2)
                            ,BORDER_X_RADIUS,BORDER_Y_RADIUS,SLIDER_HEIGHT);
    {
        font.setPixelSize(16);
        font.setBold(true); //设置粗体
        painter.setFont(font);
        painterPen.setColor(Qt::yellow);
        painter.setPen(painterPen);
        painter.drawText(0, this->height()- OFFSET_VALUE * 2, this->width(), OFFSET_VALUE, Qt::AlignCenter, m_message);
    }

    // 绘制进度条
    {
        painterPen.setColor(Qt::white);
        painter.setPen(painterPen);
        if(m_percent != 0)
        {
            QBrush brush(QColor(150, 230, 100 ,255));
            painter.setBrush(brush);
            painter.drawRoundedRect(OFFSET_VALUE, this->height() - OFFSET_VALUE
                                    , (this->rect().width()- OFFSET_VALUE * 2) * m_percent / 100
                                    , BORDER_X_RADIUS,BORDER_Y_RADIUS,SLIDER_HEIGHT);   //这里6个参数,第七个参数是默认参数
        }
    }
    // 绘制进度文本
    {
        font.setPixelSize(14);
        font.setBold(false);
        painter.setFont(font);
        painterPen.setColor(Qt::white);
        painter.setPen(painterPen);
        QString drawText = QString::number(m_percent,'f',0) + QString("%");
        painter.drawText(0, this->height() - OFFSET_VALUE, this->width(), OFFSET_VALUE, Qt::AlignCenter, drawText);
        painter.end(); //一般在绘制完成后，你需要调用 painter.end(); 来结束绘图操作的上下文。这是为了确保正确的资源释放和状态恢复。
    }

    // 绘制圆角窗体
    {
        QPainterPath painterPathPath;
        QRectF rect = QRectF(0, 0, this->width(), this->height());
        painterPathPath.addRoundRect(rect, BORDER_X_RADIUS, BORDER_X_RADIUS);
        QPolygon polygon= painterPathPath.toFillPolygon().toPolygon();
        QRegion region(polygon);
        this->setMask(region);
    }
}

void SplashScreen::setStagePercent(const int &percent, const QString &message)
{
    if(this->isHidden())
    {
        this->show();
    }

    if(!this->isActiveWindow())
    {
        this->activateWindow();
        this->raise();
    }
    m_message=message;

    while(m_percent <percent)
    {
        m_percent=m_percent+0.1;   //这里后面要改
        qApp->processEvents(); //防止死掉，而执行不了事件队列中其他的操作
        this->repaint();
        //        调用 repaint() 会立即触发窗口的 paintEvent 事件
        //update() 是更加轻量级的操作，因为它会合并多个重绘请求，从而减少不必要的重复绘制。
        //        而在一般情况下，推荐使用 update()，因为它更加高效，减少了不必要的重复绘制，提高了性能。
    }

}

void SplashScreen::setStart(QWidget *widget, const QString &title, const QString &logoFile)
{

    if(nullptr!=widget)
    {
        m_mainWidget=widget;
        m_pixLogo=QPixmap(logoFile);
        m_textLogo=title;
        m_mainWidget->setWindowOpacity(0.0);
        if(m_mainWidget->isHidden())
        {
            m_mainWidget->show();
        }
        if(nullptr==m_propertyAnimation)
        {
            m_propertyAnimation=new QPropertyAnimation(m_mainWidget,"windowOpacity");
            m_propertyAnimation->setDuration(ANIMATION_DURATION);
            m_propertyAnimation->setStartValue(0.0);
            m_propertyAnimation->setEndValue(1.0);
        }

    }
}

void SplashScreen::setFinish()
{
    this->close();
    if(nullptr!=m_mainWidget) //现在将这个设置为焦点窗口以及置顶了
    {
        m_mainWidget->activateWindow();
        m_mainWidget->raise();
    }
    if(nullptr!=m_propertyAnimation)//在这个时候才让这个动画进行一个播放
    {
        m_propertyAnimation->start();
    }

}
