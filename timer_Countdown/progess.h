#ifndef PROGESS_H
#define PROGESS_H

#include <QWidget>
#include <QPointF>
//QPointF 是Qt框架中的一个类，表示平面上的一个点，具有 x 和 y 坐标。
//    在Qt中，它常常用于处理图形、图像和界面的坐标位置。这个类可以方便地处理二维平面上的点的坐标信息，
#include <QPainter>

class Progess : public QWidget
{
    Q_OBJECT
public:
    explicit Progess(QWidget *parent = nullptr);

    // qreal 的具体实现可能会根据不同的编译器和平台而有所不同，但它通常会被映射到对应平台的浮点数类型（如 float 或 double）。
    //它表示浮点数
    //设置圆形(弧形/外圆/内圆/)占比
    void setCircleRatio(const qreal &arcRatio=1.0,
                        const qreal &outerCircleRatio=0.8,
                        const qreal &innerCircleRatio=0.6);
    //    通常，这样的操作可能用于绘图中的某个元素，例如一个圆，
    //        它只需要填充而不需要边框。通过使用 Qt::NoPen，你可以确保该元素没有可见的边框。
    //设置圆形（外圆/内圆）画笔
    void setCirclePen(const QPen &outerCirclePen=QPen(Qt::NoPen),
                      const QPen &innerCirclePen=QPen(Qt::NoPen));

     //设置圆形(外圆/内圆)画刷
    void setCircleBrush(const QBrush &outerCircleBrush=QBrush("#808080"),
                        const QBrush&innerCircleBrush=QBrush("#CBF6FE"));
    /*设置弧形画笔*/
    void setArcPenBrush(const QBrush&arcPenBrush=QBrush("#008CFE")); //画刷

    void setArcPenDashPattern(const QVector<qreal> &dashs,
                              const bool &isShowDashBaseBrush=false,
                              const QBrush &dashBaseBrush=QBrush("#DCDCDC"));//虚线模式

    void setArcPenGradient(const QConicalGradient &conicalGrad,
                           const bool &isShowGradient=true);//渐变色
    //设置文本属性
    void setTextProperty(const QColor &color=QColor("#000000"),
                         const QFont &font=QFont());
    void setText(const QString &text);//设置显示的文本

    void setProgressValue(const qreal &progressValue);//设置进度值


protected:
    virtual void paintEvent(QPaintEvent * event);



private:
    qreal currentProgressValue;//当前进度值(0-100) 由setProgressValue()设置
    QPointF circleCenter;//部件的中心点(做圆心)
    qreal maxRadius;//最大圆半径

    /*弧形/外圆/内圆占比  由setCircleRatio()设置*/
    qreal arcRatio;
    qreal outerCircleRatio;
    qreal innerCircleRatio;

    /*外圆/内圆画笔   由setCirclePen()设置*/
    QPen outerCirclePen;
    QPen innerCirclePen;
    /*外圆/内圆画刷 由setCircleBrush()设置*/
    QBrush outerCircleBrush;
    QBrush innerCircleBrush;
    /*文本  由setText*()设置*/
    QString text;
    QColor textColor;
    QFont textFont;
    /*弧形画笔的相关参数 由setArcPen*()设置*/
    QPen arcPen;
    bool isShowDashBaseBrush;//是否展示弧形虚线底色
    QBrush dashBaseBrush;//弧形虚线底色(由画刷保存)
    bool isShowGradient;//是否显示弧形渐变色
    QConicalGradient conicalGrad;//锥形渐变

    void drawCircleProgressBar(QPainter &painter);//绘制圆形进度条



signals:

};

#endif // PROGESS_H
