/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：轮播图窗口
 * ***************************************/
#include "bannawidget.h"
#include "ui_bannawidget.h"

// 构造函数
BannaWidget::BannaWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BannaWidget)
{
    ui->setupUi(this);
}

// 析构函数
BannaWidget::~BannaWidget()
{
    delete ui;
}

void BannaWidget::paintEvent(QPaintEvent *event)
{
    QStylePainter painter(this);
    QStyleOption opt;
    opt.initFrom(this);
    opt.rect = rect();
    painter.drawPrimitive(QStyle::PE_Widget, opt);

    QWidget::paintEvent(event);
}
