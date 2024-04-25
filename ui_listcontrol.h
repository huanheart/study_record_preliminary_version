/********************************************************************************
** Form generated from reading UI file 'listcontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTCONTROL_H
#define UI_LISTCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mymaterialflatbutton.h>

QT_BEGIN_NAMESPACE

class Ui_ListControl
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *labelImage;
    QVBoxLayout *verticalLayout;
    QLabel *labelAppName;
    QLabel *labelAppText;
    QWidget *widgetStar;
    MyMaterialFlatButton *pushButtonInstall;
    QSpacerItem *horizontalSpacer;
    QFrame *frameLine;

    void setupUi(QWidget *ListControl)
    {
        if (ListControl->objectName().isEmpty())
            ListControl->setObjectName(QStringLiteral("ListControl"));
        ListControl->resize(623, 98);
        ListControl->setStyleSheet(QLatin1String("QFrame#frameLine\n"
"{\n"
"background: rgba(255, 220, 220, 40);\n"
"}\n"
"\n"
"QLabel#labelAppName\n"
"{\n"
"font-family: Microsoft YaHei;\n"
"font-size: 16px;\n"
"color: #FFFFFF;\n"
"}\n"
"\n"
"QLabel#labelAppText\n"
"{\n"
"font-family: Microsoft YaHei;\n"
"font-size: 12px;\n"
"color: #AAAAAA;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        verticalLayout_2 = new QVBoxLayout(ListControl);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 9, 9, 9);
        labelImage = new QLabel(ListControl);
        labelImage->setObjectName(QStringLiteral("labelImage"));
        labelImage->setStyleSheet(QStringLiteral("border-image:url(:/Photo/app.ico)"));

        horizontalLayout->addWidget(labelImage);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelAppName = new QLabel(ListControl);
        labelAppName->setObjectName(QStringLiteral("labelAppName"));

        verticalLayout->addWidget(labelAppName);

        labelAppText = new QLabel(ListControl);
        labelAppText->setObjectName(QStringLiteral("labelAppText"));

        verticalLayout->addWidget(labelAppText);


        horizontalLayout->addLayout(verticalLayout);

        widgetStar = new QWidget(ListControl);
        widgetStar->setObjectName(QStringLiteral("widgetStar"));

        horizontalLayout->addWidget(widgetStar);

        pushButtonInstall = new MyMaterialFlatButton(ListControl);
        pushButtonInstall->setObjectName(QStringLiteral("pushButtonInstall"));
        pushButtonInstall->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonInstall->setStyleSheet(QLatin1String("QPushButton{\n"
"	background:#028C6A;\n"
"	color:#D1EDE1;\n"
"	border:1px solid gray;\n"
"	border-radius:6px;\n"
"	padding:7px;\n"
"	font:14px;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"	padding:0;\n"
"	height:0;\n"
"	width:0;\n"
"}\n"
"QPushButton:Pressed{\n"
"	background:#028C6A;\n"
"}"));
        pushButtonInstall->setAutoRepeatDelay(0);

        horizontalLayout->addWidget(pushButtonInstall);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 6);
        horizontalLayout->setStretch(2, 6);
        horizontalLayout->setStretch(3, 2);
        horizontalLayout->setStretch(4, 3);

        verticalLayout_2->addLayout(horizontalLayout);

        frameLine = new QFrame(ListControl);
        frameLine->setObjectName(QStringLiteral("frameLine"));
        frameLine->setStyleSheet(QLatin1String("QFrame\n"
"{\n"
"background-color: #333333 \n"
"}"));
        frameLine->setFrameShape(QFrame::StyledPanel);
        frameLine->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frameLine);


        retranslateUi(ListControl);

        QMetaObject::connectSlotsByName(ListControl);
    } // setupUi

    void retranslateUi(QWidget *ListControl)
    {
        ListControl->setWindowTitle(QApplication::translate("ListControl", "Form", Q_NULLPTR));
        labelImage->setText(QString());
        labelAppName->setText(QApplication::translate("ListControl", "QCoolPage", Q_NULLPTR));
        labelAppText->setText(QApplication::translate("ListControl", "Qt\347\202\253\351\205\267\347\225\214\351\235\242\357\274\214Qt\345\274\200\346\272\220\351\241\271\347\233\256\357\274\201", Q_NULLPTR));
        pushButtonInstall->setText(QApplication::translate("ListControl", "\347\274\226\350\276\221", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ListControl: public Ui_ListControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTCONTROL_H
