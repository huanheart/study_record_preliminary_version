#include "mymaterialflatbutton.h"

MyMaterialFlatButton::MyMaterialFlatButton(QWidget *parent)
    : QtMaterialFlatButton{parent}
{
    this->setForegroundColor(QColor(0,198,231));
    this->setText("编辑");
    int rand=qrand()%2;
    if(rand==0)
    {
        this->applyPreset(Material::FlatPreset);
    }
    else
    {
        this->applyPreset(Material::CheckablePreset);
    }
    QFont font;
    font.setPixelSize(12);
    this->setFont(font);
}
