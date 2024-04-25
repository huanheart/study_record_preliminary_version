/********************************************************************************
** Form generated from reading UI file 'bannacontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANNACONTROL_H
#define UI_BANNACONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BannaControl
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widgetImage;
    QLabel *labelFirst;
    QLabel *labelSecond;
    QLabel *labelThird;
    QLabel *labelFourth;
    QLabel *labelFifth;
    QPushButton *pushButtonLeft;
    QPushButton *pushButtonRight;
    QFrame *frameDot;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonFirst;
    QPushButton *pushButtonSecond;
    QPushButton *pushButtonThird;
    QPushButton *pushButtonFourth;
    QPushButton *pushButtonFifth;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *BannaControl)
    {
        if (BannaControl->objectName().isEmpty())
            BannaControl->setObjectName(QStringLiteral("BannaControl"));
        BannaControl->resize(797, 430);
        BannaControl->setStyleSheet(QLatin1String("QWidget,QFrame\n"
"{\n"
"background-color: #1F1F1F;\n"
"}"));
        verticalLayout = new QVBoxLayout(BannaControl);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widgetImage = new QWidget(BannaControl);
        widgetImage->setObjectName(QStringLiteral("widgetImage"));
        widgetImage->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"border-radius:6px;\n"
"}"));
        labelFirst = new QLabel(widgetImage);
        labelFirst->setObjectName(QStringLiteral("labelFirst"));
        labelFirst->setGeometry(QRect(20, 100, 320, 200));
        labelSecond = new QLabel(widgetImage);
        labelSecond->setObjectName(QStringLiteral("labelSecond"));
        labelSecond->setGeometry(QRect(70, 70, 400, 250));
        labelThird = new QLabel(widgetImage);
        labelThird->setObjectName(QStringLiteral("labelThird"));
        labelThird->setGeometry(QRect(150, 50, 480, 300));
        labelFourth = new QLabel(widgetImage);
        labelFourth->setObjectName(QStringLiteral("labelFourth"));
        labelFourth->setGeometry(QRect(330, 70, 400, 250));
        labelFifth = new QLabel(widgetImage);
        labelFifth->setObjectName(QStringLiteral("labelFifth"));
        labelFifth->setGeometry(QRect(470, 100, 320, 200));
        pushButtonLeft = new QPushButton(widgetImage);
        pushButtonLeft->setObjectName(QStringLiteral("pushButtonLeft"));
        pushButtonLeft->setGeometry(QRect(20, 180, 48, 48));
        pushButtonLeft->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonLeft->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-image: url(:/Photo/less_than.png);"));
        pushButtonRight = new QPushButton(widgetImage);
        pushButtonRight->setObjectName(QStringLiteral("pushButtonRight"));
        pushButtonRight->setGeometry(QRect(740, 180, 48, 48));
        pushButtonRight->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonRight->setStyleSheet(QLatin1String("background-color: transparent;\n"
"background-color: transparent;\n"
"border-image: url(://Photo/more_than.png);"));
        frameDot = new QFrame(widgetImage);
        frameDot->setObjectName(QStringLiteral("frameDot"));
        frameDot->setGeometry(QRect(0, 350, 797, 80));
        frameDot->setMinimumSize(QSize(0, 30));
        frameDot->setMaximumSize(QSize(16777215, 80));
        frameDot->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border-image: url(:/Photo/normal_gray.png);\n"
"}\n"
"\n"
"QPushButton:checked \n"
"{\n"
"border-image: url(:/Photo/hover_blue.png);\n"
"}\n"
""));
        frameDot->setFrameShape(QFrame::StyledPanel);
        frameDot->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frameDot);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 25, 0, 35);
        horizontalSpacer = new QSpacerItem(287, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonFirst = new QPushButton(frameDot);
        pushButtonFirst->setObjectName(QStringLiteral("pushButtonFirst"));
        pushButtonFirst->setMinimumSize(QSize(16, 16));
        pushButtonFirst->setMaximumSize(QSize(16, 16));
        pushButtonFirst->setStyleSheet(QStringLiteral(""));
        pushButtonFirst->setCheckable(true);

        horizontalLayout->addWidget(pushButtonFirst);

        pushButtonSecond = new QPushButton(frameDot);
        pushButtonSecond->setObjectName(QStringLiteral("pushButtonSecond"));
        pushButtonSecond->setMinimumSize(QSize(16, 16));
        pushButtonSecond->setMaximumSize(QSize(16, 16));
        pushButtonSecond->setStyleSheet(QStringLiteral(""));
        pushButtonSecond->setCheckable(true);

        horizontalLayout->addWidget(pushButtonSecond);

        pushButtonThird = new QPushButton(frameDot);
        pushButtonThird->setObjectName(QStringLiteral("pushButtonThird"));
        pushButtonThird->setMinimumSize(QSize(16, 16));
        pushButtonThird->setMaximumSize(QSize(16, 16));
        pushButtonThird->setStyleSheet(QStringLiteral(""));
        pushButtonThird->setCheckable(true);
        pushButtonThird->setChecked(true);

        horizontalLayout->addWidget(pushButtonThird);

        pushButtonFourth = new QPushButton(frameDot);
        pushButtonFourth->setObjectName(QStringLiteral("pushButtonFourth"));
        pushButtonFourth->setMinimumSize(QSize(16, 16));
        pushButtonFourth->setMaximumSize(QSize(16, 16));
        pushButtonFourth->setStyleSheet(QStringLiteral(""));
        pushButtonFourth->setCheckable(true);

        horizontalLayout->addWidget(pushButtonFourth);

        pushButtonFifth = new QPushButton(frameDot);
        pushButtonFifth->setObjectName(QStringLiteral("pushButtonFifth"));
        pushButtonFifth->setMinimumSize(QSize(16, 16));
        pushButtonFifth->setMaximumSize(QSize(16, 16));
        pushButtonFifth->setStyleSheet(QStringLiteral(""));
        pushButtonFifth->setCheckable(true);

        horizontalLayout->addWidget(pushButtonFifth);

        horizontalSpacer_2 = new QSpacerItem(287, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widgetImage);


        retranslateUi(BannaControl);

        QMetaObject::connectSlotsByName(BannaControl);
    } // setupUi

    void retranslateUi(QWidget *BannaControl)
    {
        BannaControl->setWindowTitle(QApplication::translate("BannaControl", "BannaWidget", Q_NULLPTR));
        labelFirst->setText(QString());
        labelSecond->setText(QString());
        labelThird->setText(QString());
        labelFourth->setText(QString());
        labelFifth->setText(QString());
        pushButtonLeft->setText(QString());
        pushButtonRight->setText(QString());
        pushButtonFirst->setText(QString());
        pushButtonSecond->setText(QString());
        pushButtonThird->setText(QString());
        pushButtonFourth->setText(QString());
        pushButtonFifth->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BannaControl: public Ui_BannaControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANNACONTROL_H
