#include "labelwidget.h"
#include "ui_labelwidget.h"

LabelWidget::LabelWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LabelWidget)
{
    ui->setupUi(this);
}

LabelWidget::~LabelWidget()
{
    delete ui;
}


void LabelWidget::on_Save_clicked() //保存信息
{
    //获取文本框他们的内容
    Information.LineEdit=ui->lineEdit->text();
    Information.TextEdit=ui->textEdit->toPlainText();
    Information.StarNumber=ui->StarSpinBox->value();
    Information.CurrentNum=-1;
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
        emit SaveInformation(Information,Whether_to_send::YES);    //传枚举说明要创建标签    //这里为了保存内容，然后去恢复页面

        emit SaveLineEdit_toComBoBox(Information.LineEdit);  //让这个combobox进行一个保存对应标签信息

    }
    //下面将原本的编辑内容清空
    ui->lineEdit->clear();
    ui->textEdit->clear();
    ui->StarSpinBox->setValue(1.0);


}



void LabelWidget::on_Query_clicked()
{
    QUrl url(GlobalSpace::Url_OpenMyGithub);
    if(!url.isValid()){
    QMessageBox::information(this,"信息框","url打开失败");
    return ;
    }
    QDesktopServices::openUrl(url);
}


void LabelWidget::on_AddTask_clicked()
{

    QMessageBox::information(this,"信息框","待开发中");
}

