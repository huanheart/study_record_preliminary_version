#include "titlebar.h"

TitleBar::TitleBar(QWidget *parent)
    : QWidget{parent}
{
    this->parentWidget = parent;   //保存这里的parent指针，这里是new (this)中的this，也就是父对象，后面
    //他会传给QWidget，然后在父类的构造函数调用的时候赋值给这个父类

    //由于这个是在ui界面上建立的，那么它会自己绑定他的父对象，而这个this，其实就是widget.ui这个的窗口，那么此时的parent就是目前这个标题栏的父对象
    //然后我们记录这个父对象即可，我们自己手动的操作使父对象进行移动，什么的，就可以达到我们创建的标题栏能够移动的效果。

}

void TitleBar::setParentWidget(QWidget *parentWidget) //析构函数   //这里不明白这个为什么成析构函数了
{
    this->parentWidget=parentWidget;
}

void TitleBar::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        mousePress = true;
    }
    if(parentWidget)      //parentWidget
    {
        movePoint = event->globalPos() - parentWidget->pos(); //和移动事件打配合的
    }
}

void TitleBar::mouseReleaseEvent(QMouseEvent *)
{
        mousePress = false;
}

void TitleBar::mouseMoveEvent(QMouseEvent *event)
{
    if(isMax==true) //使得在放大的时候窗口不能移动
        return ;

    if(mousePress && parentWidget)     //mousePress && parentWidget
    {
        QPoint movePos = event->globalPos();
        parentWidget->move(movePos - movePoint);     //将父窗口移动到新的位置
        //和mousePressEvent打配合的，首先是点击，固然先对movePoint进行赋值
        // ，才用这个移动，固然movepoint是点击位置，movepos是每次移动的位置
    }
}
