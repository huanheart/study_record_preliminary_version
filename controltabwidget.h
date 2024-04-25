#ifndef CONTROLTABWIDGET_H
#define CONTROLTABWIDGET_H

#include <QWidget>
#include<QTreeWidgetItem>
#include"Global.hpp" //默认放的东西
#include<QPalette>
#include<QKeyEvent>



#include "labelwidget.h"
#include "currentlistcontrolwidget.h"



namespace Ui {
class controltabwidget;
}


typedef struct TabWidgetData
{
    QWidget * currentWidget; //当前窗口
    QString currentTabText; //名称
}TabWidgetData;


using MapWidget =QMap<WidgetTabType,TabWidgetData>; //进行一个绑定

class controltabwidget : public QWidget
{
    Q_OBJECT

public:
    explicit controltabwidget(QWidget *parent = nullptr);

    ~controltabwidget();

private:
    Ui::controltabwidget *ui;
    MapWidget mapTabWidget;
    LabelWidget * labelWidget=nullptr;
    CurrentListControlWidget * CurrentWidget=nullptr;
    LabelInformation MyInformation; //用于保存创建标签的信息，后面和json会有配合
    void initValue();
    void keyPressEvent(QKeyEvent* event) override;
protected:
    void resizeEvent(QEvent event);
    void paintEvent(QPaintEvent *event);
public slots:
    void change(int width,int height);
signals:
    void sendShowIndex(WidgetTabType);
    void RecoverFinsh(LabelInformation Information);
    void ChangeUi_Information(long long CurrentNum,LabelInformation Information);
    void UpdateListWidget(QString str,Update_ListWidget decide);

public slots:
    void To_hideLabelWidget();
    void To_hideLabelWidget_2();

private slots:
    void receiveShowCurrentTab(WidgetTabType widgetTabType);
    void RecoverWidget(LabelInformation Information,enum Whether_to_send decide);
    void ShowListControlWidget(long long CurrentNum,LabelInformation Information);
    void on_AddLabel_clicked();
    void on_look_clicked() ;
};

#endif // CONTROLTABWIDGET_H
