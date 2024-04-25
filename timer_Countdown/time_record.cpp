#include "time_record.h"
#include "ui_time_record.h"
#include<QDebug>
#include<iostream>
Time_record::Time_record(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Time_record)
{
    ui->setupUi(this);
    ui_init();
    init_thread();
    my_init();

}

Time_record::~Time_record()
{
    emit send_json(json);
    emit send_to_allTimeJsonWrite(LabelHash);


    new_thread_write->start();
    allTimeJsonWrite->start();
    new_thread_write->wait();
    allTimeJsonWrite->wait();

    delete Progess_Bar;
    delete Progess_BarSon;
    delete m_timer;
    delete windows_play;
    delete allTimeJsonRead;
    delete new_thread_read;
    delete new_thread_write;
    delete new_thread_init;
    delete allTimeJsonWrite;
    delete dock;
    delete MyView;

    //这里Progess_BarSon;要放到这个的dock前面，否则出错，他原因就是有窗口是一个控件的父对象，然后先删除了父对象，然后没赋值位nullpptr，然后又删除了它这个绑定的子对象，
    //因为子对象已经被删除了，固然放到后面再delete，就会出错，所以保险起见，可以每次删除后置空，这样就不会有任何问题了
    delete ui;

}

void Time_record::InitCurrentLabel(QJsonArray JsonArray)
{
    //下面根据里面的currentNum以及lineEdit来将combox_2进行一个初始化

    for(const QJsonValue & value:JsonArray){
        if(value.isObject()){
            QJsonObject Object=value.toObject();
//            AssociationData TempData;
//            TempData.CurrentNum=Object["CurrentNum"].toInt();
//            TempData.LineEdit=Object["LineEdit"].toString();
//            ComboxData.append(TempData);
            ui->comboBox_2->addItem(Object["LineEdit"].toString());
        }

    }
    //将这些标签用于conmoox
//    int i=1; //不是0的原因是最开始会有一个下标为0的临时会话
//    for(AssociationData num:ComboxData)
//    {
//        ui->comboBox_2->addItem(num.LineEdit);
//        num.index=i++;
//    }


}



void Time_record::on_OpenUrl_clicked()
{

    QUrl url(GlobalSpace::Url_OpenModuleIntroduction);
    if(!url.isValid()){
        QMessageBox::information(this,"信息框","url打开失败");
        return ;
    }
    QDesktopServices::openUrl(url);
}

void Time_record::on_Settings_clicked()
{

    if(ui->Settinngs_widget->isHidden())
    {
        ui->Settinngs_widget->show();
    }
    else
    {
        ui->Settinngs_widget->hide();
    }

}

void Time_record::on_additional_widget_clicked()
{
    if(!dock->isHidden())
    {
        dock->hide();
        return ;
    }
    dock->setGeometry(QRect(200,200,300,300));
    dock->setFloating(true); //这两个都会显示出这两个小窗口
    dock->show();

}


void Time_record::on_track_time_clicked()
{
      //在这里还需要把这个计时器重置为0

      cutover=!cutover;
      if(cutover) //这个意思为切换，为真就是恢复原本时间的内容
      {
        RevertEdit();
        ui->track_time->setStyleSheet("QPushButton{border-image:url(://Photo/start.jpg);}"
                                      "QPushButton:hover{border-image:url(://Photo/start_hover.jpg);}"); //设置默认样式、
        m_timer->stop();

        if(Rest_or_Study==false) //这个要设置为false，否则在重置的时候会显示相反的结果
        {
            remainingTime=change_time;
            emit ToSetCircleProgressBar(remainingTime,100-remainingTime/StudyDivisor);
        }
        else
        {
            remain_rest_time=rest_change_time;
            emit ToSetCircleProgressBar(remain_rest_time,100-remain_rest_time/RestDivisor);
        }
        return ;
      }
      //为假就是点击执行按钮了，开始计时间

      CancelEdit();
      m_timer->start(1000); //每1秒就进行一个time_out,这个计时器不应该加在这里，应该是在点击开始按钮的时候才开始start
      ui->track_time->setStyleSheet("QPushButton{border-image:url(://Photo/pause.jpg);}"
                                    "QPushButton:hover{border-image:url(://Photo/pause_hover.jpg);}"); //设置默认样式
}

void Time_record::UpdateTime() //更新时间
{
        //在这里不需要加上取消或者恢复控件的函数调用，试过了CancelEdit()和RevertEdit();
      if(remainingTime>0&&Rest_or_Study==false)
      {
            remainingTime--;
            AddMapElement(CurrentDate.toString("yyyy-MM-dd"),1); //每次加一个
            emit ToSetCircleProgressBar(remainingTime,100-remainingTime/StudyDivisor);
            qDebug()<<"sdajd"<<remainingTime<<' '<<StudyDivisor;
      }
      else if(remain_rest_time>0&&Rest_or_Study==true) //说明是休息的内容
      {
            remain_rest_time--;
            emit ToSetCircleProgressBar(remain_rest_time,100-remain_rest_time/RestDivisor);
      }
      else{  //这里否则只能是二者的剩余时间一个为0
        m_timer->stop();
        if(Rest_or_Study==false)
        {
            remainingTime=change_time;
        }
        else
        {
            remain_rest_time=rest_change_time;
            qDebug()<<"remain_rest_time为： "<<remain_rest_time;
        }

        Rest_or_Study=!Rest_or_Study; //进行休息和学习的切换
        if(Rest_or_Study==true) //如果当前为休息状态，将标签改变
        {
            ui->Study_or_Rest_label->setText("                    Resting");
        }
        else
        {
            ui->Study_or_Rest_label->setText("                    Studying");
        }

        //在这里播放音乐
        if(ui->notice_voice->isChecked())
        {
            windows_play->start();
        }
        on_track_time_clicked(); //手动调用槽函数
        QMessageBox::information(this,"倒计时完成","倒计时已完成"); //要恢复按钮
      }
      //可以下面这么输出
      //        qDebug() << "Remaining time: " << QTime(0, 0).addSecs(remainingTime).toString("mm:ss");
      //        QTime(0, 0)：创建一个QTime对象，表示时间为0小时0分钟，作为基准时间
      //        addSecs(remainingTime)：将剩余时间（以秒为单位）加到基准时间上，得到剩余时间对应的QTime。
      //        toString("mm:ss")：将QTime对象转换为字符串，以"mm:ss"的格式表示。即，只显示分钟和秒部分。
}

void Time_record::convey_init(Init_Json json)
{
       //在初始化的时候让控件的时间和里面的内容进行一个同步
      this->json=json;
      decide_AutoConverSation();
      decide_notice_voice();
      decide_track_PushButton();
      StudyDivisor=json.time/60;
      change_time=json.time;            //change_time还是得保留

      qDebug()<<"change_time为 "<<change_time;
                                       this->json.Type=json.Type;
      ui->comboBox->setCurrentIndex(static_cast<int>(this->json.Type));
      if(change_time/60!=2)
      {
        ui->spinBox_3->setValue(change_time/60);
      }
      else
      {       //spinBox默认的是最小值，所以说如果他原本就是最小值了的话，是不会自动触发valueChanged改变的信号的
              //这里写的不好，后续改进,尽管我change_time设置为了120，但是如果不这样的话，一开始就会有进度条显示了
        ui->spinBox_3->setValue(3);
        ui->spinBox_3->setValue(2);
      }
      RestDivisor=json.rest_time/60;
      rest_change_time=json.rest_time;



      rest_time=json.rest_time; //这个可能不是很需要


      Number_of_sessions=json.Number_of_sessions;
      ui->spinBox->setValue(Number_of_sessions);
      ui->spinBox_2->setValue(rest_time/60); //因为是存的是秒数，显示出来的是分钟
      ui->spinBox_3->setValue(change_time/60);
}

void Time_record::my_init() //进行初始化
{
    //这里设置了也没有用的，因为不能把同一个对象放到不同布局的对应位置上
      //    ui->gridLayout->addWidget(Progess_Bar,0,1,1,1);
      m_timer=new QTimer(this);
      change_time=120;
      rest_change_time=120; //试试为0的时候能不能正常
      remainingTime=change_time; //默认是300秒，5分钟
      remain_rest_time=rest_change_time;
//      FinishPlayer=new QMediaPlayer(this);
      windows_play=new WindowsPlay(); //这个是线程，不加this
      dock=new QDockWidget("同步窗口",this);
      dock->setWindowFlags(Qt::WindowStaysOnTopHint);
      dock->setAllowedAreas(Qt::NoDockWidgetArea);
      Progess_BarSon=new ProgessSon(this); //这个可以直接改成this了原本里面的内容是Progess_Bar
      dock->setWidget(Progess_BarSon);
      dock->setMinimumSize(300,300);
      dock->hide();

      //    dock->setWidget();  //在这里可以添加一些东西在这个小窗口上，可以进行一个复制的，也可以地址复制，然后做到同步的效果，删除的话，就可以弄
      //一个计数器来弄了
      dock->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable|QDockWidget::DockWidgetFloatable);



//      qDebug()<<QDir::currentPath();


      connect(m_timer,&QTimer::timeout,this,&Time_record::UpdateTime);
      connect(this,&Time_record::send_json,new_thread_write,&CloseThread::recv_json);
      connect(this,&Time_record::ToSetCircleProgressBar,Progess_Bar,&ProgessSon::setCircleProgressBar);
      connect(this,Time_record::ToSession_setCircleProgressBar,Progess_Bar,&ProgessSon::Session_setCircleProgressBar);
      connect(this,&Time_record::ToSetCircleProgressBar,Progess_BarSon,&ProgessSon::setCircleProgressBar);
      connect(this,Time_record::ToSession_setCircleProgressBar,Progess_BarSon,&ProgessSon::Session_setCircleProgressBar);
      emit ToSetCircleProgressBar(remainingTime,100-remainingTime/StudyDivisor); //这里是读取本地文件的,默认是播放开始学习进度的
}


void Time_record::init_thread() //这里先进行读取本地数据
{

      new_thread_init=new MyThread(); //没弄对象树
      new_thread_write=new CloseThread();
      connect(new_thread_init,&MyThread::ConveyJson,this,convey_init);
      new_thread_init->start();
      new_thread_init->setParent(nullptr); //如果只调用start，应该是隐式的后台运行（即分离主线程）这种是显式的
      //来告诉 Qt 不要将子线程标记为主线程的子对象，从而避免主线程等待子线程的完成。
      //      如果没有 setParent(nullptr)，主线程会等待子线程执行完毕。
      allTimeJsonWrite=new AllTimeJsonWrite();
      connect(this,&Time_record::send_to_allTimeJsonWrite,allTimeJsonWrite,&AllTimeJsonWrite::Receive_to_allTimeJsonWrite);
      allTimeJsonRead=new AllTimeJsonRead();

      connect(allTimeJsonRead,&AllTimeJsonRead::SendTimeHashMap,this,[=](QHash<QString,QHash<QString,long long> >  LabelHash){
          this->LabelHash=LabelHash; //因为只有用到一次，那么就直接用匿名表达式了
          QTimer::singleShot(1500,this,[=](){
                emit InitChart(); //得延迟发送了,否则dock不会被初始化，导致柱状图分析的那个模块崩溃
          });

      });
      allTimeJsonRead->start();
      allTimeJsonRead->wait();
}

void Time_record::ui_init()
{
    ui->Settinngs_widget->setAttribute(Qt::WA_StyledBackground, true);
    ui->Settinngs_widget->setObjectName("QWidget");
    ui->Settinngs_widget->setStyleSheet("#QWidget{border-top: 5px solid qlineargradient(y0:0, y1:1,stop: 0 #ececef, stop: 1 white);"
                                          "border-left: 5px solid qlineargradient(x0:0, x1:1,stop: 0 #ececef, stop: 1 white);"
                                          "border-bottom: 5px solid qlineargradient(y0:0, y1:1,stop: 0 white, stop: 1  #ececef);border-right: 5px solid qlineargradient(x0:0, x1:1,stop:  0 white, stop: 1 #ececef);background-color: rgb(255,255,255);}");
    //设置样式
    Progess_Bar=new ProgessSon(this);
    ui->gridLayout->addWidget(Progess_Bar,0,0,1,1);

    ui->track_time->setStyleSheet("QPushButton{border-image:url(://Photo/start.jpg);}"
                                  "QPushButton:hover{border-image:url(://Photo/start_hover.jpg);}"); //设置默认样式
    ui->Settinngs_widget->hide(); //只有点击settings，这个设置按钮，这个页面才出现

    //      ui->spinBox->setButtonSymbols(QAbstractSpinBox::PlusMinus);
    ui->spinBox->setStyleSheet("QSpinBox::up-button { subcontrol-position: left; }"
                               "QSpinBox::down-button { subcontrol-position: right; }"
                               "QSpinBox { padding-left: 45px; padding-right: 10px; }");
    ui->spinBox_2->setStyleSheet("QSpinBox::up-button { subcontrol-position: left; }"
                               "QSpinBox::down-button { subcontrol-position: right; }"
                               "QSpinBox { padding-left: 45px; padding-right: 10px; }");
    ui->spinBox_3->setStyleSheet("QSpinBox::up-button { subcontrol-position: left; }"
                                 "QSpinBox::down-button { subcontrol-position: right; }"
                                 "QSpinBox { padding-left: 45px; padding-right: 10px; }");
    ui->spinBox->setAccelerated(true); //启动加速
    ui->spinBox_2->setAccelerated(true);
    ui->spinBox_3->setAccelerated(true);
    ui->spinBox_2->setSuffix("分");
    ui->spinBox_3->setSuffix("分");

    ui->spinBox->setFocusPolicy(Qt::NoFocus); //去除键盘焦点事件,使得不能通过编辑lineEdit进行修改内容，只能通过按钮来进行编辑
    ui->spinBox_2->setFocusPolicy(Qt::NoFocus);
    ui->spinBox_3->setFocusPolicy(Qt::NoFocus);

    ui->comboBox->setView(MyView=new QListView(this));  //有了这个它的下拉框的1这些东西才能生效
    ui->comboBox_2->setView(MyView_2=new QListView(this));
    CurrentLabelName=ui->comboBox_2->itemText(0);



}

void Time_record::decide_AutoConverSation()
{
    if(json.AutoConverSation)
    {
       ui->AutoConverSation->setChecked(true);
       ui->Auto_label->setText("开");
    }
    else
    {
       ui->AutoConverSation->setChecked(false);          //然后将状态重新设置，存给json，在关闭窗口的时候，统一进行一个json的写入
       ui->Auto_label->setText("关");

    }
    json.AutoConverSation=ui->AutoConverSation->isChecked();

}

void Time_record::decide_notice_voice()
{
    if(json.noticeButton)
    {
       ui->notice_voice->setChecked(true); //后面在这里还需要弄一个追踪设置什么的，所以if里面还要加，这里打个断点提醒自己
       ui->notice_label->setText("开"); //固然这里肯定要多次调用的，所以说可以进行用内敛函数，这里就不用内联了，因为代码量还是很多，而且编译器还会自动帮我们设置类中的函数是否是需要内联的
       if(WhetherFirstPlay==true)
       {
//            play();
            windows_play->start();
//            windows_play->wait(); //这里就不等待这个线程了，直接让他后台运行即可
       }
       else         //这里实现的不好，可能要改，这个WhetherFirstPlay是让系统进入的时候不能一开始就开始播放
       {
            WhetherFirstPlay==true;
       }
    }
    else
    {
       ui->notice_voice->setChecked(false);
       ui->notice_label->setText("关");
    }
    json.noticeButton=ui->notice_voice->isChecked();

}

void Time_record::decide_track_PushButton()
{
    if(json.track_PushButton_stat)
    {
       ui->track_PushButton->setChecked(true);
       ui->track_label->setText("开");
    }
    else
    {
       ui->track_PushButton->setChecked(false);
       ui->track_label->setText("关");
       ui->comboBox_2->setCurrentIndex(0);
    }
    json.track_PushButton_stat=ui->track_PushButton->isChecked();

}

void Time_record::CancelEdit() //取消编辑
{
    ui->spinBox->setReadOnly(true);
    ui->spinBox_2->setReadOnly(true);
    ui->spinBox_3->setReadOnly(true);
    ui->track_PushButton->setEnabled(false);
    ui->AutoConverSation->setEnabled(false);
    ui->notice_voice->setEnabled(false);
    ui->comboBox_2->setEnabled(false);

}


void Time_record::RevertEdit() //恢复编辑
{
    ui->spinBox->setReadOnly(false);
    ui->spinBox_2->setReadOnly(false);
    ui->spinBox_3->setReadOnly(false);
    ui->track_PushButton->setEnabled(true);
    ui->AutoConverSation->setEnabled(true);
    ui->notice_voice->setEnabled(true);
    ui->comboBox_2->setEnabled(true);
}

void Time_record::paintEvent(QPaintEvent *event)      //这里加上这个可以保证
{
    QStylePainter painter(this);
    QStyleOption opt;
    opt.initFrom(this);
    opt.rect = rect();
    painter.drawPrimitive(QStyle::PE_Widget, opt);
    QWidget::paintEvent(event);
}



void Time_record::on_AutoConverSation_clicked()
{
    json.AutoConverSation=!json.AutoConverSation;
    decide_AutoConverSation();
}

void Time_record::on_notice_voice_clicked()
{
    json.noticeButton=!json.noticeButton;
    decide_notice_voice();
}

void Time_record::on_track_PushButton_clicked()
{
    json.track_PushButton_stat=!json.track_PushButton_stat;
    decide_track_PushButton();
}


void Time_record::on_spinBox_3_valueChanged(int arg1) //焦点会议持续时间
{
    json.time=arg1*60;        //我发现当设置为最小值的时候，他并不会自动进入这个函数，所以我得手动触发
    change_time=json.time;
    StudyDivisor=json.time/100; //除数的更新
    remainingTime=change_time;
    qDebug()<<"改变了"<<change_time;
    if(Rest_or_Study==false||FirstEnter==false) //FistEnter也会进入使用这个
    {
       emit ToSession_setCircleProgressBar(remainingTime);
       FirstEnter=true;
    }

}

void Time_record::on_spinBox_2_valueChanged(int arg1) //休息时段，后续可能多增加一些功能
{
    json.rest_time=arg1*60;
    rest_change_time=json.rest_time;
    RestDivisor=json.rest_time/100;
    remain_rest_time=rest_change_time;
    if(Rest_or_Study==true&&FirstEnter==true)
        emit ToSession_setCircleProgressBar(remain_rest_time);

}


void Time_record::on_spinBox_valueChanged(int arg1) //焦点会话数
{
    json.Number_of_sessions=arg1;
}


void Time_record::on_comboBox_currentIndexChanged(int index)
{
    QConicalGradient conicalGrad;
    bool temp=false;
    if(index==0) //蔚蓝海
    {
        Progess_Bar->setCircleRatio();
        Progess_Bar->setCircleBrush(); //设置画圆比
        Progess_Bar->setArcPenBrush();
        Progess_Bar->setTextProperty();
        Progess_Bar->setArcPenGradient(conicalGrad,temp);
        Progess_Bar->update();

        Progess_BarSon->setCircleRatio();
        Progess_BarSon->setCircleBrush(); //设置画圆比
        Progess_BarSon->setArcPenBrush();
        Progess_BarSon->setTextProperty();
        Progess_BarSon->setArcPenGradient(conicalGrad,temp);
        Progess_BarSon->update();
        this->json.Type=ClockType::BlueSea;
        return ;
    }
    Progess_Bar->setCircleRatio(0.3,0.8,0.7);
    Progess_Bar->setCircleBrush(QBrush("#373737"),QBrush("#212121")); //设置画圆比
    Progess_Bar->setArcPenBrush(QBrush("#816BCF"));
    Progess_Bar->setTextProperty(QColor("#816BCF"),QFont("",18));
    Progess_Bar->setArcPenGradient(conicalGrad,temp);
    Progess_BarSon->setCircleRatio(0.3,0.8,0.7);
    Progess_BarSon->setCircleBrush(QBrush("#373737"),QBrush("#212121")); //设置画圆比
    Progess_BarSon->setArcPenBrush(QBrush("#816BCF"));
    Progess_BarSon->setTextProperty(QColor("#816BCF"),QFont("",18));
    Progess_BarSon->setArcPenGradient(conicalGrad,temp);
    this->json.Type=ClockType::PurpleColor;
    if(index==1) //炫酷紫彩
    {
        conicalGrad.setAngle(90);
        conicalGrad.setColorAt(1.0, Qt::red);
        conicalGrad.setColorAt(0.8, Qt::yellow);
        conicalGrad.setColorAt(0.6, Qt::green);
        conicalGrad.setColorAt(0.4, Qt::cyan);
        conicalGrad.setColorAt(0.2, Qt::blue);
        conicalGrad.setColorAt(0, Qt::magenta);
        Progess_Bar->setArcPenGradient(conicalGrad);
        Progess_BarSon->setArcPenGradient(conicalGrad);
        this->json.Type=ClockType::CoolPurpleColor;
//        return ;
    }

    Progess_Bar->update();
    Progess_BarSon->update();

}


void Time_record::on_comboBox_2_currentIndexChanged(int index) //此时点击记时间的时候，就会对应到对应的标签时间中
//注意，由于默认是0，所以刚开始他是不会进行改变的，但是此时原本0的位置就是临时会话，固然一点关系都没有，里面弄一个计数器，
//不过这个对应标签的时间得想跟哪一个关联json数据进行一个关联，如果多开一个json不进行关联，后面还是得关联，所以就很麻烦了
{
    if(!json.track_PushButton_stat&&index!=0) //如果没有同步时间追踪，不允许切换
    {
        ui->comboBox_2->setCurrentIndex(0);
        QMessageBox::information(this,"提示框","请开启同步时间追踪");
        return ;
    }
    CurrentLabelName=ui->comboBox_2->itemText(index);
    qDebug()<<CurrentLabelName;
}

void Time_record::CurrentTime_ToRecordTime(QDateTime CurrentDate)
{
    this->CurrentDate=CurrentDate;
}



void Time_record::DeleteComBoBox(QString LineEdit)
{
    if(ui->comboBox_2->findText(LineEdit)!=-1)
    {
        ui->comboBox_2->removeItem(ui->comboBox_2->findText(LineEdit));
    }
}

void Time_record::AddComBoBox(QString LineEdit)
{
    qDebug()<<"被处罚了";
    if(ui->comboBox_2->findText(LineEdit)==-1)
    {
        ui->comboBox_2->addItem(LineEdit);

    }
}

void Time_record::Update_MyComBoBox(QString NewLineEdit, QString OldLineEdit) //这里目前是根据旧的换成新的了，可能改成标签换新
{ //目前是按照每个标签名只能有一个标签的形式
    DeleteComBoBox(OldLineEdit);
    AddComBoBox(NewLineEdit);
}


void Time_record::DeleteMapElement(QString LineEdit)
{
    QHash<QString, long long>::iterator it;
    for(it=LabelHash[LineEdit].begin();it!=LabelHash[LineEdit].end();++it) //将对应的标签时间全部清空
    {
        it.value()=0;     //这个应该能修改，得注意一下
    }

}

void Time_record::UpdateMapElement(QString NewLineEdit, QString OldLineEdit)
{
    LabelHash[NewLineEdit].clear(); //清空原先的，注意，我这里不能有重复的内容，到时候必须得改进了
    LabelHash[NewLineEdit]=QHash<QString,long long>(LabelHash[OldLineEdit]);
    DeleteMapElement(OldLineEdit);
    for (auto it = LabelHash.begin(); it != LabelHash.end(); ++it) {
        qDebug() << "Label:" << it.key();
        for (auto subIt = it.value().begin(); subIt != it.value().end(); ++subIt) {
            qDebug() << "    Time:" << subIt.key() << ", Value:" << subIt.value();
        }
    }

}

void Time_record::AddMapElement(QString Date, long long time)
{
    //这里是增加对应CurrentLabelName标签名字的对应日期中的对应时间
    if(CurrentLabelName=="临时会话")
    {
        return ;
    }

    qDebug()<<CurrentLabelName;
    LabelHash[CurrentLabelName][Date]+=time;
    qDebug()<<"这是当前label的时间"<<LabelHash[CurrentLabelName][Date]<<" 日期为 "<<Date;
}



