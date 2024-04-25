#ifndef MAINOBJECT_H
#define MAINOBJECT_H

#include <QObject>
class Widget; //使用前项声明，可以防止循环引用，即头文件的互相包含,而且使用这种，也可以减少直接用头文件来包含所带来的编译时间


class MainObject : public QObject
{
    Q_OBJECT
public:
    explicit MainObject(QObject *parent = nullptr);
    ~MainObject();
signals:

public:
    void setInit();

//private:
    QWidget *m_mainWindow; //由于主窗口是它的成员，那么就会先初始化它，所以可以做到启动动画的时候加载线程等内容
};

#endif // MAINOBJECT_H
