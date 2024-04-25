#ifndef GLOBAL_HPP
#define GLOBAL_HPP

#include<QString>
#include<QFile>
#include<QJsonDocument>
#include<QDebug>
#include<QSize>
#include<QDesktopServices>
#include<QUrl>
#include<QMessageBox>
#include<QRegExp> //正则表达式
#include<QRegularExpression>
#include<QStylePainter>
#include<QJsonObject>
#include<QJsonArray>
#include<QMetaType>


enum class ClockType; //前向声明
enum class ClockType:int
{
    BlueSea,
    CoolPurpleColor,
    PurpleColor
};

struct VectorElement
{
    QString LabelName;
    long long Time;
};

struct Init_Json{
    double time;
    double rest_time;
    double Number_of_sessions;
    bool track_PushButton_stat; //默认这些状态是关着的，然后这些要进行一个连接label状态的
    bool AutoConverSation;
    bool noticeButton;
    enum ClockType Type=ClockType::BlueSea;
};

//struct AssociationData
//{
//    QString LineEdit;
//    long long CurrentNum;
//    long long index=-1;
//};

enum class WidgetTabType :int
{
    Tab_first,
    Tab_Second,
    Tab_thrid,
    Tab_fourth,
    Tab_fifth,
    Tab_sixth,
    Tab_max //这一个其实没有用的，>=这个就表示对应失效
};

enum class GroupingType :int
{
    LabelGroup,
    WeekGroup
};

enum class Whether_to_send :int
{
    YES,
    NO
};

enum class Update_ListWidget:int     //这里使用强枚举类型，如果不写的话,默认是int
{
    ShowAll,
    ShowPart
};

//enum DecideType
//{
//    CurrentListControlWidget,
//    LabelWidget
//};

typedef struct LabelInformation      //json的也是和这里的进行关联的
{
    QString LineEdit;
    QString TextEdit;
    double StarNumber;
    long long CurrentNum=-1;
}LabelInformation;

//typedef struct LabelJson{  //这里可能要改的
//    QString LineEdit;
//    QString TextEdit;
//    double StarNumber;
//    long long CurrentNum;
//}LabelJson;

//这后面想着一下
namespace GlobalSpace
{
const QString TASK_BAR="://Photo/app.ico";
const QString SYSTEM_PHOTO="://Photo/image.png";
const QString QSS_PATH="://QSS/stylesheet.qss";
const QString Url_OpenModuleIntroduction="https://baike.baidu.com/item/%E7%95%AA%E8%8C%84%E5%B7%A5%E4%BD%9C%E6%B3%95/6353502";
const QString Url_OpenMyGithub="https://github.com/huanheart";

//这里是存放listConntrol的内容的
const int MAX_SCORE=5;
const QSize LABEL_SIZE=QSize(16,16);
const QString STAR_PATH="://Photo/star.png"; //这两个是放照片的
const QString HALF_STAR_PATH="://Photo/half_star.png";

}

#endif // GLOBAL_H

//注意：我们在弄.h进行声明什么的时候，必须要在#endif    #ifndef里面进行声明，否则出错
