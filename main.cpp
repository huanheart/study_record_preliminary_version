#include "widget.h"

#include <QApplication>
#include<Global.hpp>
#include<QMetaType>
#include"screen/mainobject.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    LOAD_QSS(GlobalSpace::SYSTEM_PHOTO);   //这个加载不了,因为有些名字不匹配导致所有都不能成功加载
    qRegisterMetaType<Init_Json>("Init_Json"); //在发送信号的时候需要先告诉qt传递的参数是什么类型的，需要先进行一个注册
    qRegisterMetaType<QHash<QString, QHash<QString, long long>>>("QHash<QString, QHash<QString, long long>>");

    //这个注册一定要放在w的上面
    MainObject mainObject;
    mainObject.setInit();

    return a.exec();
}
