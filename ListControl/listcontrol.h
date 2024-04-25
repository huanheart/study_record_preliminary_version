#ifndef LISTCONTROL_H
#define LISTCONTROL_H

#include <QWidget>
#include<QLabel>
#include<QHBoxLayout>
#include<Global.hpp>


namespace Ui {
class ListControl;
}

class ListControl : public QWidget
{
    Q_OBJECT

public:
    explicit ListControl(QWidget *parent = nullptr);
    ~ListControl();
    void makeStar(LabelInformation Information);
    void UpdateInformation(LabelInformation Information);
    QString GetLineEdit() const;


public:
    long long CurrentNum=0;  //表示当前的下标，到时候会根据这个下标来进行一个显示相应的内容
    //当进入这个页面的时候，也会有删除功能。然后就是根据这个发送的下标来进行对应的删除的
    //去遍历一遍这个new出来的listControl，然后如果对应的下标是当前这一个，那么我就进行一个删除
    LabelInformation Information;

private slots:
    void on_pushButtonInstall_clicked();

private:
    QLabel *createStarLabel(const QPixmap & pix);
    void ClearStars();
    void CreateStar();


signals:
    void ShowCurrentListWidget(long long CurrentNum,LabelInformation Information);

private:
    Ui::ListControl *ui;
    QList<QLabel*> m_listLabel;
    QHBoxLayout *hboxLayout=nullptr;
    double starCount;


};

#endif // LISTCONTROL_H
