#ifndef MYMATERIALFLATBUTTON_H
#define MYMATERIALFLATBUTTON_H

#include <QWidget>
#include<components/qtmaterialflatbutton.h>
#include<QFont>
#include<Global.hpp>

class MyMaterialFlatButton : public QtMaterialFlatButton
{
    Q_OBJECT
public:
    explicit MyMaterialFlatButton(QWidget *parent = nullptr);

signals:
    void ClickedFinsh(LabelInformation Information);


};

#endif // MYMATERIALFLATBUTTON_H
