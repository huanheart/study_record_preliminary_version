#include "progess.h"
#include<QDebug>
Progess::Progess(QWidget *parent)
    : QWidget{parent}
{
    this->currentProgressValue=0;
    this->isShowDashBaseBrush=false;
    this->isShowGradient=false;
    setCircleRatio();
    setCircleBrush();
    setCirclePen();
    setArcPenBrush();
    setTextProperty();
    this->resize(300,300);
}

void Progess::setCircleRatio(const qreal &arcRatio, const qreal &outerCircleRatio, const qreal &innerCircleRatio)
{
    this->arcRatio=arcRatio;
    this->outerCircleRatio=outerCircleRatio; //*弧形/外圆/内圆占比
    this->innerCircleRatio=innerCircleRatio;
}

void Progess::setCirclePen(const QPen &outerCirclePen, const QPen &innerCirclePen)
{
    this->outerCirclePen=outerCirclePen; //用来画内圆外圆的画笔
    this->innerCirclePen=innerCirclePen;
}

void Progess::setCircleBrush(const QBrush &outerCircleBrush, const QBrush &innerCircleBrush)
{
    this->outerCircleBrush=outerCircleBrush; // //设置圆形(外圆/内圆)画刷,设置一些外圆的颜色以及大小
    this->innerCircleBrush=innerCircleBrush;
}

void Progess::setArcPenBrush(const QBrush &arcPenBrush)
{
    //    this->arcPen.setCapStyle(Qt::FlatCap); //现在还不知道这个arcpen的画笔有什么用
    this->arcPen.setCapStyle(Qt::RoundCap);
    //    this->arcPen.setCapStyle(Qt::SquareCap);
    this->arcPen.setBrush(arcPenBrush); //刚刚那个不是有一个画笔吗，为什么还需要一个画笔
    //这个画笔是用来画进度条的，然后上面三种不同格式的就是你你那个进度条的头部，是方的还是
    //圆的，我这里就选择圆的了
}

void Progess::setArcPenDashPattern(const QVector<qreal> &dashs, const bool &isShowDashBaseBrush, const QBrush &dashBaseBrush)
{
    //    其中第一个值（0.42）表示实线的长度，第二个值（0.43）表示空白的长度。
    arcPen.setDashPattern(dashs);
    this->isShowDashBaseBrush=isShowDashBaseBrush;
    this->dashBaseBrush=dashBaseBrush;
}
//设置渐变

void Progess::setArcPenGradient(const QConicalGradient &conicalGrad, const bool &isShowGradient)
{
    this->conicalGrad=conicalGrad;
    this->isShowGradient=isShowGradient;
}

//设置中间的文本的颜色及大小
void Progess::setTextProperty(const QColor &color, const QFont &font)
{
    this->textColor=color;
    this->textFont=font;
}
//设置中间的文本内容
void Progess::setText(const QString &text)
{
    this->text=text;
    update();
}

void Progess::setProgressValue(const qreal &progressValue)
{
    this->currentProgressValue=progressValue; //这个不是和100%那个文本这个有关的，而是和画笔的进度有关联
    //这个删除之后发现进度条就不会随之一起变化了
    update();

}

void Progess::paintEvent(QPaintEvent *event)
{
    QWidget::paintEvent(event);
    int width=this->width();
    int height=this->height();
    //       QPointF circleCenter;//部件的中心点(做圆心)
    circleCenter.setX(width/2.0); //变成浮点数
    circleCenter.setY(height/2.0);
    //    circleCenter.setX(width/5.0);
    //    circleCenter.setY(height/5.0);  //我发现这个移动上去了，如果设置成这个的话
    int maxDiameter=width>height?height:width;
    maxRadius=maxDiameter*0.5;
    QPainter painter(this); //一般来说都是放置在这个函数中的，这个画笔
    painter.setRenderHint(QPainter::Antialiasing); //反锯齿
    //设置了反锯齿之后，它圆形的周围不会那么粗糙了，就很平滑
    drawCircleProgressBar(painter);


}

void Progess::drawCircleProgressBar(QPainter &painter)
{
    qreal outerCircleRadius=maxRadius*outerCircleRatio;
    qreal innerCircleRadius=maxRadius*innerCircleRatio;
    qreal annulusWidth=outerCircleRadius-innerCircleRadius; //圆环宽度
    qreal arcPenWidth=annulusWidth*arcRatio; //圆弧（画笔）宽度
    qreal arcRadius=annulusWidth/2.0+innerCircleRadius; //圆弧所在圆半径

    //画所在矩形
    QRectF arcRectF(circleCenter.x()-arcRadius,circleCenter.y()-arcRadius,arcRadius*2,arcRadius*2);

    //外圆形
    painter.setPen(outerCirclePen);
    painter.setBrush(outerCircleBrush);
    painter.drawEllipse(circleCenter,outerCircleRadius,outerCircleRadius); //画的位置，以及椭圆的两个a,b半径

    //内圆
    painter.setPen(innerCirclePen);
    painter.setBrush(innerCircleBrush);
    painter.drawEllipse(circleCenter,innerCircleRadius,innerCircleRadius); //画的位置，以及椭圆的两个a,b半径

    //弧形
    arcPen.setWidthF(arcPenWidth); //通过调整画笔的线宽，你可以改变绘制的线条的粗细。

    if(isShowDashBaseBrush) //使用虚线底色绘制一遍进度条背景
    {
        QBrush penBrush=arcPen.brush();   //记录一下当前弧形画笔的画刷
        arcPen.setBrush(dashBaseBrush); //    QBrush dashBaseBrush;//弧形虚线底色(由画刷保存)
        painter.setPen(arcPen);
        painter.drawArc(arcRectF,90*16,-360*16);
        painter.setBrush(penBrush); //还原画刷
    }
    if(isShowGradient)
    {
        conicalGrad.setCenter(circleCenter); //设置锥形渐变的圆心
        arcPen.setBrush(QBrush(conicalGrad));
    }
    painter.setPen(arcPen);
    painter.drawArc(arcRectF,90*16,-(int)(currentProgressValue*57.6));

    painter.setPen(QPen(textColor));
    painter.setFont(textFont);
    painter.drawText(arcRectF,Qt::AlignCenter,text);
}
