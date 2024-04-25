#include "coolpage.h"
#include "ui_coolpage.h"
#include<QDebug>
coolpage::coolpage(QWidget *parent) :
    TitleBar(parent),
    ui(new Ui::coolpage)
{
    ui->setupUi(this);
    ui->pushButton_3->setStyleSheet("QPushButton{border-image:url(://Photo/close_normal.png);}"
                                    "QPushButton:hover{border-image:url(://Photo/close_hover.png);}");
    ui->pushButton_2->setStyleSheet("QPushButton{border-image:url(://Photo/normal_normal.png);}"
                                    "QPushButton:hover{border-image:url(://Photo/normal_hover.png);}");
    ui->pushButton->setStyleSheet("QPushButton{image:url(://Photo/min_normal.png);border:none}" //设置无边框，这个不能border-image，否则会全部填充
                                    "QPushButton:hover{image:url(://Photo/min_hover.png);}");

}


coolpage::~coolpage()
{
    delete ui;
}


void coolpage::on_pushButton_clicked() //缩小
{
    if(parentWidget)
    {
        parentWidget->showMinimized();
    }
}


void coolpage::on_pushButton_2_clicked() //最大最小化的改变
{
    if(parentWidget==nullptr) return ;
    if(parentWidget->isMaximized())
    {
        parentWidget->showNormal();

        ui->pushButton_2->setStyleSheet("QPushButton{border-image:url(://Photo/normal_normal.png);}"
                                        "QPushButton:hover{border-image:url(://Photo/normal_hover.png);}");
        //如果是image而不是border-image的话，那么这个按钮的白色边框就会显示出来，就没有填充
        isMax=false;
    }
    else
    {
        parentWidget->showMaximized();
        ui->pushButton_2->setStyleSheet("QPushButton{border-image:url(://Photo/max_normal.png);}"
                                        "QPushButton:hover{border-image:url(://Photo/max_hover.png);}");
        isMax=true;
    }
    emit changetest();

}


void coolpage::on_pushButton_3_clicked()  //关闭
{
    if(parentWidget)
    {
        parentWidget->close();
    }
}

void coolpage::paintEvent(QPaintEvent *event)
{
    QWidget::paintEvent(event);
    QPainter p(this);
   // QPixmap background("://black.jpg"); //用这样的方法就能很好的做到不加载其他图片的时候不掩盖其他的
    //控件
//    QColor customColor(192,192,192); //自定义颜色为灰色
    //p.drawPixmap(rect(), background); //将这个进行一个填满的操作
//     p.fillRect(rect(),customColor);
    return ;
}


