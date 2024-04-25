#ifndef TITLEBAR_H
#define TITLEBAR_H

#include <QObject>
#include <QWidget>
#include <QMouseEvent>

class TitleBar : public QWidget
{
    Q_OBJECT



public:
    explicit TitleBar(QWidget *parent = nullptr);
        void setParentWidget(QWidget *parentWidget); //析构函数    //这里不明白这个为什么成析构函数了

protected:
    bool mousePress = false;
    QPoint movePoint = QPoint(0, 0);    //Qpoint获取坐标的，这个0,0是窗口最左上角的那个点
    QWidget *parentWidget = nullptr;
    bool isMax=false;
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);




signals:

};

#endif // TITLEBAR_H
