/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：轮播图，使用双向循环链表思想，并使用Qt
 * 的动画组，然后对五张图片进行移动,如下所示
 * 1，2，3，4，5分别对应五个Label中的五个图片
 * 1的Label的坐标和大小，被2和5指向，即若向右移动
 * 则1的大小和位置变为2的大小和位置，2的位置变为3的
 * 大小和位置，依次类推
 * 若向左移动，则1的大小和位置则变为5的大小和位置，
 * 5的大小和位置则变为4的大小和位置，依次类推
 * 1 -> 2 -> 3 -> 4 -> 5 -> 1
 * 1 <- 2 <- 3 <- 4 <- 5 <- 1
 * 若不理解，课查看数据结构双向循环链表
 * ***************************************/
#ifndef BANNACONTROL_H
#define BANNACONTROL_H

#include <QWidget>
#include <QPushButton>
#include <QParallelAnimationGroup>     //是一个并行动画组
#include <QPropertyAnimation>
#include <QButtonGroup>   //用于管理按钮组。当你有一组按钮时，你可以将它们添加到按钮组中，
#include <QLabel>
#include <QTimer>

namespace Ui {
class BannaControl;           //这个就是轮番图
}

namespace BannaSpace     //弄了一个命名空间，看着非常棒
{
const int INTERVAL_TIMER = 3000; //间隔时间，应该是多少次换一个图片
const int ANIMATION_DURTION = 200; //动画时长，也就是平滑过渡的一个时长
const QByteArray ANIMATION_GEOMETRY = "geometry";
const QString STYLE_SHEET = "border-image:url(%1)";    //一个格式
const QString FIRST_IMAGE_PATH = "://Photo/1.png";
const QString SECOND_IMAGE_PATH = "://Photo/2.jpg";
const QString THIRD_IMAGE_PATH = "://Photo/3.jpg";
const QString FOURTH_IMAGE_PATH = "://Photo/4.jpg";
const QString FIFTH_IMAGE_PATH = "://Photo/5.jpg";

enum SortWidget
{
    SORT_FIRST,
    SORT_SECOND,
    SORT_THIRD,
    SORT_FOURTH,
    SORT_FIFTH,
}; //和五张图有关

}

// 使用双向链表思想
typedef struct BannaData
{
    QPushButton *pushButton; //这个按钮是干嘛的？用不是ui的那个 //就是ui的那个，进行了一个绑定的
    QLabel *currentImageLabel;//当前图片
    QLabel *nextImageLabel; //前一个图片
    QLabel *preImageLabel; //后一个图片
    QPropertyAnimation *proAnimation; //是用于改变对象属性值的动画类
} BannaData;

class BannaControl : public QWidget
{
    Q_OBJECT

public:
    explicit BannaControl(QWidget *parent = 0);
    ~BannaControl();
private slots:
    void slot_changeImageTimer();
    void on_pushButtonLeft_clicked();
    void on_pushButtonRight_clicked();

private:
    Ui::BannaControl *ui;
    QTimer *changeImageTimer = nullptr;
    QList<BannaData> bannaDataList;      //定义双向链表
    QButtonGroup buttonGroup;       //定义按钮组
    QParallelAnimationGroup animationGroup; //定义并行动画组

    void initValue();
    void setNextAnimation();
    void setPreAnimation();
    int getMaxGeometryIndex(const QList<BannaData> &listData);  //获取最大几何索引,根据名字还不太清除是干嘛的
    void sortGeometry(const bool &isNextFlage);
    void addAnimationPixmap(QList<QString> &listPixmap);
};

#endif // BANNAWIDGET_H
