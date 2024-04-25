#include "excelwidget.h"
#include "ui_excelwidget.h"

ExcelWidget::ExcelWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ExcelWidget)
{
    ui->setupUi(this);
    this->init();

}

ExcelWidget::~ExcelWidget()
{
    delete ExportThread;
    delete ui;
}



void ExcelWidget::SetCylinderWidget(CylinderWidget *c) //由于到时候会调用线程，所以在传数据的时候，直接进行一个拷贝，就可以了,避免多线程的指针问题，麻烦
{
    this->c=c;
}

void ExcelWidget::init()
{
    ui->comboBox->setView(new QListView(this));
    ui->comboBox_2->setView(new QListView(this));
    ui->lineEdit->setPlaceholderText("StudyRecord");
    ExportThread=new ExcelExport();
    connect(ExportThread,&ExcelExport::Finish,this,[=](){
        QMessageBox::information(this,"提示信息框","导出成功");
    });
    connect(ExportThread,&ExcelExport::UnFinish,this,[=](){
        QMessageBox::critical(this,"错误框","文件名重复");
    });



}

void ExcelWidget::paintEvent(QPaintEvent *event)
{
    QStylePainter painter(this);
    QStyleOption opt;
    opt.initFrom(this);
    opt.rect = rect();
    painter.drawPrimitive(QStyle::PE_Widget, opt);
    QWidget::paintEvent(event);
}

void ExcelWidget::InitTime()   //在这里做初始化时间的操作，把它设置为信号槽的原因是，初始化ui的顺序不一，得确保在timeRecord初始化完了之后，此时就可以用t来初始化了，注意
//必须是拷贝，因为不能让t里面的时间也给跟着变了
{
    CurrentDateTimeString =c->CurrentDateTime.toString("yyyy-MM-dd"); //获取程序运行时的时间，这里后面得用json保存
    FiveForwardTime=c->CurrentDateTime.addDays(-5);
    FiveBackwardTime=c->CurrentDateTime; //因为不能超过当前时间

    FiveDaysDateString=c->FiveForwardTime.toString("yyyy-MM-dd");//后面还要弄一个日历，因为一直5天5天的定位有点麻烦

    ui->TimeLabel->setText(FiveDaysDateString+"-"+CurrentDateTimeString); //这个add是返回当前时间的
    FirstUseTime=c->FirstUseTime;
    CurrentDateTime=c->CurrentDateTime;
    FirstTime=c->FirstTime;
}


void ExcelWidget::on_forward_clicked()
{
    if(FirstTime>=FiveForwardTime)
    {
        return ;
    }
    FiveForwardTime=FiveForwardTime.addDays(-5);
    FiveBackwardTime=FiveBackwardTime.addDays(-5);
    FiveDaysDateString=FiveForwardTime.toString("yyyy-MM-dd");
    CurrentDateTimeString=FiveBackwardTime.toString("yyyy-MM-dd");
    ui->TimeLabel->setText(FiveDaysDateString+"-"+CurrentDateTimeString);
}


void ExcelWidget::on_backward_clicked()
{
    if(CurrentDateTime.toString("yyyy-MM-dd")<=FiveBackwardTime.toString("yyyy-MM-dd"))
    {
        return ;
    }
    //其实也可以直接用.year方法.date方法来比较年和日是否相等的
    FiveForwardTime=FiveForwardTime.addDays(5);
    FiveBackwardTime=FiveBackwardTime.addDays(5);
    FiveDaysDateString=FiveForwardTime.toString("yyyy-MM-dd");
    CurrentDateTimeString=FiveBackwardTime.toString("yyyy-MM-dd");     //这部分和前面的forward都有共同的部分
    //为了减少函数开销，可以使用内联函数
    ui->TimeLabel->setText(FiveDaysDateString+"-"+CurrentDateTimeString);
}


void ExcelWidget::on_Delete_clicked()
{
    ui->lineEdit->setText(""); //把它给清空了
}


void ExcelWidget::on_AllExport_clicked() //全部导出？
{
    if(AllExport==false)
    {
        AllExport=true;
    }
    else
    {
        AllExport=false;
    }
    qDebug()<<AllExport;
}


void ExcelWidget::on_NowExport_clicked()
{

    QRegularExpression regex("^\\s*$");
    if(regex.match(ui->lineEdit->text()).hasMatch()) //设置文件名
    {
        ExportThread->SetFileName("StudyRecord.xlsx");
    }
    else
    {
        ExportThread->SetFileName(ui->lineEdit->text()+".xlsx");
    }
    ExportThread->SetLabelHash(c->t->LabelHash);    //给到对应的数据结构,这个是实时维护的，固然不用担心更新问题，在timeRecord中已经有帮我们在维护这个数据结构了
    ExportThread->SetTime(FiveForwardTime,FiveBackwardTime,AllExport);



    switch (ui->comboBox_2->currentIndex()) //设置组别
    {
    case 0:
        ExportThread->SetGroupType(GroupingType::LabelGroup);
        break;
    case 1:
        ExportThread->SetGroupType(GroupingType::WeekGroup);
        break;
    }

    qDebug()<<FiveDaysDateString<<' '<<CurrentDateTimeString;

    ExportThread->start();

}

