#include "cylinderwidget.h"
#include "ui_cylinderwidget.h"
#include<QDebug>


CylinderWidget::CylinderWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CylinderWidget)
{
    ui->setupUi(this);
    this->initValue();

}

CylinderWidget::~CylinderWidget()
{

    delete dock; //得注意删除的顺序
    delete ui;
}

void CylinderWidget::SetTime_record(Time_record * t)
{
    this->t=t; //这里光光前置声明是不够的，固然在这个类中，要导入头文件
}

void CylinderWidget::InitChart()  //进行一个初始化，用了信号槽，因为必须确保这个map被thread给到这个TimeRecord后才能让这个用到timeRecord里面的东西，否则像我一开始，那样子，由于没有被初始化就直接调用了这个函数，最终map是空的，那么就错了
{

    this->dockInit();    //这个得放在这里，不能放在构造函数那里，要不然又出现顺序问题
    SetValue(FiveForwardTime);
}

void CylinderWidget::paintEvent(QPaintEvent *event)      //加上这一个就可以样式表成功了
{
    QStylePainter painter(this);
    QStyleOption opt;
    opt.initFrom(this);
    opt.rect = rect();
    painter.drawPrimitive(QStyle::PE_Widget, opt);

    QWidget::paintEvent(event);
}



void CylinderWidget::initValue()
{
    CurrentDateTime=QDateTime::currentDateTime();
//    ui->label->setText("使得");
//    qDebug()<<ui->label->text();

    CurrentDateTimeString =CurrentDateTime.toString("yyyy-MM-dd"); //获取程序运行时的时间，这里后面得用json保存
    FiveForwardTime=CurrentDateTime.addDays(-5);
    FiveBackwardTime=CurrentDateTime; //因为不能超过当前时间

    FiveDaysDateString=FiveForwardTime.toString("yyyy-MM-dd");//后面还要弄一个日历，因为一直5天5天的定位有点麻烦

    ui->TimeLabel->setText(FiveDaysDateString+"-"+CurrentDateTimeString); //这个add是返回当前时间的
    ui->TimeLabel->setAlignment(Qt::AlignHCenter);

    QSettings settings("HuanHeart","StudyRecord");
    if(!settings.contains("FirstTime")){
        settings.setValue("FirstTime",CurrentDateTime);
        qDebug()<<CurrentDateTime<<"第一次的使用时间";
    }

    FirstTime=settings.value("FirstTime").toDateTime();
    //由于这个要进行时间的比较和其他的DateTime类型，固然还需要多转换一个dateTime，而不直接转换成QString
    FirstUseTime=FirstTime.toString();
    qDebug()<<FirstUseTime;

//    ui->widgetFirst->setSliderValue(15);     //这个进度条得根据它目前对应的标签的总学习时长来进行一个更改
 //这里的柱形图得刷新成当前对应的日期时间，如12月27

    ui->widgetFirst->setSliderText(FiveForwardTime.toString("MM-dd"));
    ui->widgetSecond->setSliderText(FiveForwardTime.addDays(1).toString("MM-dd"));
    ui->widgetThird->setSliderText(FiveForwardTime.addDays(2).toString("MM-dd"));
    ui->widgetFourth->setSliderText(FiveForwardTime.addDays(3).toString("MM-dd"));
    ui->widgetFifth->setSliderText(FiveForwardTime.addDays(4).toString("MM-dd"));
    ui->widgetSixth->setSliderText(FiveForwardTime.addDays(5).toString("MM-dd"));

    QTimer::singleShot(1700,this,[=](){
        emit CurrentTime_ToRecordTime(CurrentDateTime); //得延迟发送了
        emit InitTime();
    });


}

void CylinderWidget::dockInit()
{
    //    dockwidget显示对应的标签学习时间，
    qDebug()<<"显示dockwidget";
    dock=new MyDockWidget("详细标签信息",this,Qt::WindowStaysOnTopHint); //"详细标签信息",this,Qt::WindowStaysOnTopHint
    dock->setAllowedAreas(Qt::NoDockWidgetArea); //Qt::NoDockWidgetArea 表示不允许 QDockWidget 在任何区域停靠


    dock->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable|QDockWidget::DockWidgetFloatable);
                           //可关闭，可移动，可悬浮
    dock->hide();
    qDebug()<<"设置dockwidget中心";

}

void CylinderWidget::addDockControl(QString CurrentDate, QString LabelName, int Time)
{
    if(Time==0)
        return ;
    DockLabelControl *dockLabel=new DockLabelControl(this);
    dockLabel->setValue(CurrentDate,LabelName,Time); //增加一个内容
    DockList.append(dockLabel);
    dock->AddWidgetTom_vboxLayout(dockLabel);
}


void CylinderWidget::SetValue(QDateTime FirstTime)
{

    DeleteDockLabel();   //先清除原来的内容

    QVector<int> v(6);
    QString str="秒钟";

    for (auto it = t->LabelHash.begin(); it != t->LabelHash.end(); ++it) {
        for (auto subIt = it.value().begin(); subIt != it.value().end(); ++subIt) {
            //如果当前Date可以对的上号，那么就直接增加对应的时间

            if(subIt.key()==FirstTime.toString("yyyy-MM-dd")) //这里用不了美观的switch，只能用if else了，因为他只能读取整数类型
            {                                    //说明是标签上的最早开始的一天
                v[0]+=subIt.value();
                addDockControl(subIt.key(),it.key(),subIt.value());
            }
            else if(FirstTime.addDays(1).toString("yyyy-MM-dd")==subIt.key())
            {
                v[1]+=subIt.value();
                addDockControl(subIt.key(),it.key(),subIt.value());

            }
            else if(FirstTime.addDays(2).toString("yyyy-MM-dd")==subIt.key())
            {
                v[2]+=subIt.value();
                addDockControl(subIt.key(),it.key(),subIt.value());
            }
            else if(FirstTime.addDays(3).toString("yyyy-MM-dd")==subIt.key())
            {
                v[3]+=subIt.value();
                addDockControl(subIt.key(),it.key(),subIt.value());
            }
            else if(FirstTime.addDays(4).toString("yyyy-MM-dd")==subIt.key())
            {
                v[4]+=subIt.value();
                addDockControl(subIt.key(),it.key(),subIt.value());
            }
            else if(FirstTime.addDays(5).toString("yyyy-MM-dd")==subIt.key()) //说明是标签上的最晚开始的一天
            {
                v[5]+=subIt.value();
                addDockControl(subIt.key(),it.key(),subIt.value());
            }
             //然后将对应的标签名，日期，以及对应的任务时间创建出来，不过一开始得清空这个dockwidget上的东西

        }
    }

    long long max=-1;
    int division=1;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>max)
            max=v[i];
    }

    while(max/60)
    {
        division*=60;
        max/=60;
        if(str=="秒钟")
        {
            str="分钟";
        }
        else
        {
            str="小时";
            break;
        }
    }
    ui->label->setText("0"+str);
    ui->label_2->setText("15"+str);
    ui->label_3->setText("30"+str);
    ui->label_4->setText("45"+str);
    ui->label_5->setText("60"+str);

    ui->widgetFirst->setSliderValue(v[0]/division*5/3);   //*5/3的目的是按照100分制
    ui->widgetSecond->setSliderValue(v[1]/division*5/3);
    ui->widgetThird->setSliderValue(v[2]/division*5/3);
    ui->widgetFourth->setSliderValue(v[3]/division*5/3);
    ui->widgetFifth->setSliderValue(v[4]/division*5/3);
    ui->widgetSixth->setSliderValue(v[5]/division*5/3);

    ui->widgetFirst->repaint();
    ui->widgetSecond->repaint();
    ui->widgetThird->repaint();
    ui->widgetFourth->repaint();
    ui->widgetFifth->repaint();
    ui->widgetSixth->repaint();


}

void CylinderWidget::DeleteDockLabel()
{
    dock->DeleteDockLabel();

    DockList.clear(); //清空list里面的所有内存
}



void CylinderWidget::on_pushButton_clicked() //原本下想把这个按钮改名的，结果出现qt本身的按钮bug了
{
    if(!dock->isHidden())
    {
        dock->hide();
        return ;
    }

    dock->setGeometry(QRect(200,200,300,300));
    dock->setFloating(true);
    dock->show();

}


void CylinderWidget::on_forward_clicked() //向前     //其实可以弄一个最多显示的数量
//或者弄一个你使用这个程序的开始时间，即不能前过你最早使用的时间，可以拿一个json记录
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

    ui->widgetFirst->setSliderText(FiveForwardTime.toString("MM-dd"));
    ui->widgetSecond->setSliderText(FiveForwardTime.addDays(1).toString("MM-dd"));
    ui->widgetThird->setSliderText(FiveForwardTime.addDays(2).toString("MM-dd"));
    ui->widgetFourth->setSliderText(FiveForwardTime.addDays(3).toString("MM-dd"));
    ui->widgetFifth->setSliderText(FiveForwardTime.addDays(4).toString("MM-dd"));
    ui->widgetSixth->setSliderText(FiveForwardTime.addDays(5).toString("MM-dd"));
    SetValue(FiveForwardTime);

}


void CylinderWidget::on_backward_clicked()
{ //向后的时候得判断是否是当前时间日期，如果是，则不能向后了
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

    ui->widgetFirst->setSliderText(FiveForwardTime.toString("MM-dd"));
    ui->widgetSecond->setSliderText(FiveForwardTime.addDays(1).toString("MM-dd"));
    ui->widgetThird->setSliderText(FiveForwardTime.addDays(2).toString("MM-dd"));
    ui->widgetFourth->setSliderText(FiveForwardTime.addDays(3).toString("MM-dd"));
    ui->widgetFifth->setSliderText(FiveForwardTime.addDays(4).toString("MM-dd"));
    ui->widgetSixth->setSliderText(FiveForwardTime.addDays(5).toString("MM-dd"));
    SetValue(FiveForwardTime);
}




void CylinderWidget::on_refresh_clicked()
{

    SetValue(FiveForwardTime);
}

