#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<systemtray.h>
#include<QScreen>
#include<QRegion>


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;

private:
    SystemTray *syetemTray;

signals:
    void close_widget();
    void change_size(int width,int height);
private: //初始化函数所放的区域
    void initValue();

protected:
    void resizeEvent(QResizeEvent *event)override;
    void paintEvent(QPaintEvent * event)override;


public slots:
    void ChangeSize();



};
#endif // WIDGET_H
