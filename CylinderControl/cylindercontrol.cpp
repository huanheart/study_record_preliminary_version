#include "cylindercontrol.h"
#include "ui_cylindercontrol.h"

CylinderControl::CylinderControl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CylinderControl)
{
    ui->setupUi(this);
}

CylinderControl::~CylinderControl()
{
    delete ui;
}

void CylinderControl::setSliderValue(float value)
{
    sliderValue=value;
}

void CylinderControl::setSliderText(const QString &value)
{
    sliderText=value;
}



void CylinderControl::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter painter(this);

    float sliderMaxValue=this->height()*0.9;

    float sliderHigh=-this->height()*0.8;
    const int sliderWidth=60;

    painter.translate(this->width()*0.3,sliderMaxValue);

    QPen pen(Qt::white,2,Qt::SolidLine,Qt::RoundCap,Qt::RoundJoin);

    painter.setPen(pen); //设置好笔之后就给到画家

    // 画上面直线
    painter.drawLine(0, sliderHigh, sliderWidth, sliderHigh);

    //     画下面直线
    painter.drawLine(0, 0, sliderWidth, 0);

    //     画左边直线
    painter.drawLine(0, 0, 0, sliderHigh);

    //     画右边直线
    painter.drawLine(sliderWidth, 0, sliderWidth, sliderHigh);

    // 画上面直线线
    painter.drawLine(0, sliderHigh, sliderWidth, sliderHigh);

    //这个上面的这几个直线我还没有发现有什么用

    //画进度值
    painter.drawText(sliderWidth-40,sliderHigh-10,QString("%%1").arg(sliderValue));

    painter.drawText(5,30,sliderText); //画标题

    //将矩形填充为白色
    QPolygon polyGon;          //这个类可以绘制任意的多边形
    polyGon<<QPoint(sliderWidth, 0);
    polyGon<<QPoint(sliderWidth, sliderHigh);
    polyGon<<QPoint(0, sliderHigh);
    polyGon<<QPoint(0, 0); //可以通过不同数量和位置来弄出不同的多边形

    painter.setBrush(Qt::white);
    painter.drawConvexPolygon(polyGon); //开始画一个白色的框

    //设置渐变
    QLinearGradient linerGradient=QLinearGradient(0,0,0,sliderHigh);
    linerGradient.setColorAt(0.0, Qt::cyan);// 青色
    linerGradient.setColorAt(0.3, Qt::green); //先设置了这种渐变效果，然后再进行一个绘画
    linerGradient.setColorAt(0.7, Qt::yellow);
    linerGradient.setColorAt(1.0, Qt::red);

    QBrush brush(linerGradient);
    painter.setBrush(brush);

    painter.drawRect(QRectF(0,0,sliderWidth,sliderHigh*sliderValue/100));
    painter.end();




}
