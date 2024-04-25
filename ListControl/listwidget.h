#ifndef LISTWIDGET_H
#define LISTWIDGET_H

#include <QWidget>
#include<QVBoxLayout>
#include "Global.hpp"
#include"listcontrol.h"
#include"ListControl/SaveLabelJson.h"
#include"ListControl/readlabeljson.h"
#include<QDebug>
#include<QTimer>



namespace Ui {
class ListWidget;
}

class ListWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ListWidget(QWidget *parent = nullptr);
    ~ListWidget();

private:
    Ui::ListWidget *ui;
    QVBoxLayout * m_vboxLayout=nullptr;
    QList<ListControl*> list;   //便于进行listWidget上的一个增删改查
    long long CurrentNum=0;
    //表示当前的下标，到时候会根据这个下标来进行一个显示相应的内容，和listControl他们有关

 //当关闭的时候存放json数组的数据
    SaveLabelJson *SaveLabelInformationJson=nullptr;
    ReadLabelJson *ReadLabelInformationJson=nullptr;


public slots:
    void write_label(LabelInformation Information);
    void SaveLabel(LabelInformation Information,enum Whether_to_send decide);
    void DeleteListControl(long long DeleteNum);
    void UpdateListWidget(QString str,Update_ListWidget decide);
    void RecvLabelJson(QJsonArray JsonArray);


signals:
    void SaveValue(QString value);
    void ShowCurrentListWidget_two(long long CurrentNum,LabelInformation Information);
    void ShowListWidget();
    void DeleteCurrentLineEdit(QString LineEdit);
    void DeleteMapElement(QString LineEdit);
    void CarryList(QList<ListControl*> list);
    void InitCurrentLabel(QJsonArray JsonArray);

protected:
    void paintEvent(QPaintEvent *event);


private:
    void initValue();
};

#endif // LISTWIDGET_H
