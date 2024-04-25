#include "listcontrol.h"
#include "ui_listcontrol.h"
#include<QPixmap>
#include<QDebug>


ListControl::ListControl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListControl)
{
    ui->setupUi(this);
}

ListControl::~ListControl()
{
    delete hboxLayout;
    delete ui;

}


void ListControl::makeStar(LabelInformation Information) //float score,
{
    this->Information=Information;
    if(Information.StarNumber>GlobalSpace::MAX_SCORE)
    {
        Information.StarNumber=GlobalSpace::MAX_SCORE;
    }
    hboxLayout=new QHBoxLayout(ui->widgetStar);
//    hboxLayout->addStretch(); //添加一个水平弹簧   //这个弹簧就可以不要了
//    starCount=static_cast<int>(Information.StarNumber);
    starCount=Information.StarNumber;
    CreateStar();
//    hboxLayout->addStretch(); //继续一个弹簧
    ui->labelAppText->setText(Information.LineEdit); //设置lineEdit的就行了，TextEdit的就不设置了
}

void ListControl::UpdateInformation(LabelInformation Information)
{
    ui->labelAppText->setText(Information.LineEdit);
    this->Information=Information;    //这个一定要放在前面，否则information没有更新，则下次打开就会出错
    if(starCount==Information.StarNumber) //相等就不用浪费时间内存更新了
        return ;
    ClearStars();
    starCount=Information.StarNumber;
    CreateStar();

}


QString ListControl::GetLineEdit() const //这里就不写成内联的了，要不然得写到头文件里面
{
    if(ui->labelAppText==nullptr)
    {
        qDebug()<<"返回ui时候出现问题";
        return "";
    }
    return ui->labelAppText->text();

}


void ListControl::ClearStars()
{
    starCount=Information.StarNumber;
    for(int i=0;i<starCount;i++)
    {
        QLayoutItem *item=nullptr;
        if((item=hboxLayout->takeAt(0))!=nullptr)
        {
            delete item->widget();
            delete item;
        }
    }
    if(Information.StarNumber-static_cast<int>(starCount))
    {
        QLayoutItem *item=nullptr;
        if((item=hboxLayout->takeAt(0))!=nullptr)
        {
            delete item->widget();
            delete item;
        }
    }
}

void ListControl::CreateStar()
{
    for(int i=0;i<static_cast<int>(starCount);i++)
    {
        hboxLayout->addWidget(createStarLabel(QPixmap(GlobalSpace::STAR_PATH)));
    }
    if(Information.StarNumber-static_cast<int>(starCount))
    {
        hboxLayout->addWidget(createStarLabel(QPixmap(GlobalSpace::HALF_STAR_PATH)));
    }
}


QLabel *ListControl::createStarLabel(const QPixmap &pix)
{
    QLabel *label=new QLabel(ui->widgetStar);
    label->setFixedSize(GlobalSpace::LABEL_SIZE);
    label->setPixmap(pix);
    label->setScaledContents(true);
    return label;

}


//点击的时候就直接跳转到对应的LabelWidget区域
//然后显示对应的信息，也可以删除对应的信息
void ListControl::on_pushButtonInstall_clicked()
{
    emit ShowCurrentListWidget(CurrentNum,Information);     //我现在这里应该把对应的数据以及下标传送过去
}

