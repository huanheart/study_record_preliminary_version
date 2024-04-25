#ifndef CYLINDERCONTROL_H
#define CYLINDERCONTROL_H

#include <QWidget>
#include<QPen>
#include<QPainter>
#include<QPolygon>
#include<QLinearGradient>
#include<QDir>

#include"Global.hpp"

namespace Ui {
class CylinderControl;
}

class CylinderControl : public QWidget
{
    Q_OBJECT

public:
    explicit CylinderControl(QWidget *parent = nullptr);
    ~CylinderControl();

    void setSliderValue(float value);
    void setSliderText(const QString &value);

protected:
    void paintEvent(QPaintEvent* event);

private:
    Ui::CylinderControl *ui;
    float sliderValue=0;
    QString sliderText;


};

#endif // CYLINDERCONTROL_H
