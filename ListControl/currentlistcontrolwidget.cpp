#include "currentlistcontrolwidget.h"
#include "ui_currentlistcontrolwidget.h"

CurrentListControlWidget::CurrentListControlWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CurrentListControlWidget)
{
    ui->setupUi(this);
    init();
}

CurrentListControlWidget::~CurrentListControlWidget()
{
    delete ui;


}

void CurrentListControlWidget::ChangeInformation(long long CurrentNum,LabelInformation Information) //这里的information告诉打开的是哪一个对应的标签,用于打开标签的
{
    ui->lineEdit->setText(Information.LineEdit);
    ui->textEdit->setText(Information.TextEdit);
    ui->StarSpinBox->setValue(Information.StarNumber);
    this->CurrentNum=CurrentNum;
    this->Information=Information;
}

void CurrentListControlWidget::on_pushButton_clicked() //这里要显示一个真的要删除吗的对应信息
{
    qDebug()<<"酶促";
    msgBox->exec(); //让这个消息框出现
    if(msgBox->clickedButton()==Yes)        //这里原本把初始化也放在一起是没有问题的，结果现在分开就有了，不知道什么原因
    {
        qDebug()<<"点击了YES"; //if里面就进行一个删除了
        emit DeleteListControl(CurrentNum); //这个东西是删除对应元素
        emit DeleteComBoBox(this->Information.LineEdit);
        emit DeleteMapElement(this->Information.LineEdit); //删除当前标签
    }
}


void CurrentListControlWidget::on_Query_clicked()
{
    QUrl url(GlobalSpace::Url_OpenMyGithub);
    if(!url.isValid()){
        QMessageBox::information(this,"信息框","url打开失败");
        return ;
    }
    QDesktopServices::openUrl(url);
}


void CurrentListControlWidget::on_Save_clicked()          //在这里要保存对应的内容给到对应的ListControl,得根据下标呀
{
    LabelInformation Information;
    Information.LineEdit=ui->lineEdit->text();
    Information.TextEdit=ui->textEdit->toPlainText();
    Information.StarNumber=ui->StarSpinBox->value();
    Information.CurrentNum=this->CurrentNum;
    //这里用正则表达式
    QRegularExpression regex("^\\s*$");
    bool decide=true;
    if(regex.match(ui->lineEdit->text()).hasMatch())
    {
        decide=false;
    }

    if(!decide)
    {
        QMessageBox::critical(this,"错误消息框","你的标签栏不能为空");
    }
    else               //下面进行保存
    {
        emit SaveInformation(Information,Whether_to_send::NO);
        //现在还要做的一个点就是,将原本的标签名和现在的标签名进行一个传送

        qDebug()<<Information.LineEdit<<"新的";
        qDebug()<<this->Information.LineEdit<<"旧的";

        emit Update_MyMaterialAutoComplete(Information.LineEdit,this->Information.LineEdit); //左边新，右边旧
        emit UpdateMapElement(Information.LineEdit,this->Information.LineEdit);
        //发送了之后得把新的赋值给旧的
        this->Information=Information;
    }

}


void CurrentListControlWidget::on_AddTask_clicked()
{
    QMessageBox::information(this,"提示","暂未开发");
}

void CurrentListControlWidget::init()
{
    msgBox=new QMessageBox(this);
    msgBox->setText("你真的要删除吗?");
    msgBox->setWindowTitle("提示"); //这里默认是项目名，现在改成另外一个名字了

    Yes=new QtMaterialFlatButton(this);
    Yes->setForegroundColor(QColor(0,198,231));
    Yes->setText("Yes");
    Yes->applyPreset(Material::FlatPreset);

    No=new QtMaterialFlatButton(this);
    No->setForegroundColor(QColor(231,9,9));
    No->setText("No");           //我这里可以弄成单例模式，获取两个静态按钮，然后把他们变成成员，以至于不用每次都new

    No->applyPreset(Material::FlatPreset);

    msgBox->addButton(Yes, QMessageBox::YesRole);
    msgBox->addButton(No,QMessageBox::RejectRole);
    msgBox->setDefaultButton(No);
}



