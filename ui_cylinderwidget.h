/********************************************************************************
** Form generated from reading UI file 'cylinderwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CYLINDERWIDGET_H
#define UI_CYLINDERWIDGET_H

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
#include <cylindercontrol.h>
#include <mymaterialflatbutton.h>

QT_BEGIN_NAMESPACE

class Ui_CylinderWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_4;
    QLabel *label;
    QSpacerItem *verticalSpacer_6;
    QFrame *frameBackground;
    QHBoxLayout *horizontalLayout;
    CylinderControl *widgetFirst;
    CylinderControl *widgetSecond;
    CylinderControl *widgetThird;
    CylinderControl *widgetFourth;
    CylinderControl *widgetFifth;
    CylinderControl *widgetSixth;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    MyMaterialFlatButton *pushButton;
    MyMaterialFlatButton *forward;
    QLabel *TimeLabel;
    MyMaterialFlatButton *backward;
    MyMaterialFlatButton *refresh;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *CylinderWidget)
    {
        if (CylinderWidget->objectName().isEmpty())
            CylinderWidget->setObjectName(QStringLiteral("CylinderWidget"));
        CylinderWidget->resize(572, 398);
        CylinderWidget->setStyleSheet(QLatin1String("QWidget#frameBackground{\n"
"background-color:#1F1F1F;\n"
"}\n"
"QWidget#CylinderWidget{\n"
"background-color:#1F1F1F;\n"
"}\n"
"QLabel\n"
"{\n"
"color:white;\n"
"}\n"
"QPushButton{\n"
"color:white;\n"
"}\n"
""));
        verticalLayout_3 = new QVBoxLayout(CylinderWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        label_5 = new QLabel(CylinderWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_4 = new QLabel(CylinderWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_3 = new QLabel(CylinderWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_2 = new QLabel(CylinderWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        label = new QLabel(CylinderWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        verticalLayout->setStretch(0, 5);
        verticalLayout->setStretch(1, 5);
        verticalLayout->setStretch(2, 5);
        verticalLayout->setStretch(3, 5);
        verticalLayout->setStretch(4, 5);
        verticalLayout->setStretch(5, 5);
        verticalLayout->setStretch(6, 5);
        verticalLayout->setStretch(7, 5);
        verticalLayout->setStretch(8, 5);
        verticalLayout->setStretch(9, 5);
        verticalLayout->setStretch(10, 4);

        horizontalLayout_3->addLayout(verticalLayout);

        frameBackground = new QFrame(CylinderWidget);
        frameBackground->setObjectName(QStringLiteral("frameBackground"));
        frameBackground->setStyleSheet(QStringLiteral(""));
        frameBackground->setFrameShape(QFrame::StyledPanel);
        frameBackground->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frameBackground);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widgetFirst = new CylinderControl(frameBackground);
        widgetFirst->setObjectName(QStringLiteral("widgetFirst"));

        horizontalLayout->addWidget(widgetFirst);

        widgetSecond = new CylinderControl(frameBackground);
        widgetSecond->setObjectName(QStringLiteral("widgetSecond"));

        horizontalLayout->addWidget(widgetSecond);

        widgetThird = new CylinderControl(frameBackground);
        widgetThird->setObjectName(QStringLiteral("widgetThird"));

        horizontalLayout->addWidget(widgetThird);

        widgetFourth = new CylinderControl(frameBackground);
        widgetFourth->setObjectName(QStringLiteral("widgetFourth"));

        horizontalLayout->addWidget(widgetFourth);

        widgetFifth = new CylinderControl(frameBackground);
        widgetFifth->setObjectName(QStringLiteral("widgetFifth"));

        horizontalLayout->addWidget(widgetFifth);

        widgetSixth = new CylinderControl(frameBackground);
        widgetSixth->setObjectName(QStringLiteral("widgetSixth"));

        horizontalLayout->addWidget(widgetSixth);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 1);
        horizontalLayout->setStretch(5, 1);
        horizontalLayout->setStretch(6, 1);

        horizontalLayout_3->addWidget(frameBackground);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new MyMaterialFlatButton(CylinderWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(pushButton);

        forward = new MyMaterialFlatButton(CylinderWidget);
        forward->setObjectName(QStringLiteral("forward"));
        forward->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(forward);

        TimeLabel = new QLabel(CylinderWidget);
        TimeLabel->setObjectName(QStringLiteral("TimeLabel"));
        TimeLabel->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_2->addWidget(TimeLabel);

        backward = new MyMaterialFlatButton(CylinderWidget);
        backward->setObjectName(QStringLiteral("backward"));
        backward->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(backward);

        refresh = new MyMaterialFlatButton(CylinderWidget);
        refresh->setObjectName(QStringLiteral("refresh"));
        refresh->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(refresh);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 1);
        horizontalLayout_2->setStretch(4, 1);
        horizontalLayout_2->setStretch(5, 1);

        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(CylinderWidget);

        QMetaObject::connectSlotsByName(CylinderWidget);
    } // setupUi

    void retranslateUi(QWidget *CylinderWidget)
    {
        CylinderWidget->setWindowTitle(QApplication::translate("CylinderWidget", "Form", Q_NULLPTR));
        label_5->setText(QString());
        label_4->setText(QString());
        label_3->setText(QString());
        label_2->setText(QString());
        label->setText(QString());
        pushButton->setText(QApplication::translate("CylinderWidget", "\350\257\246\347\273\206\344\277\241\346\201\257", Q_NULLPTR));
        forward->setText(QApplication::translate("CylinderWidget", "\345\220\221\345\211\215", Q_NULLPTR));
        TimeLabel->setText(QApplication::translate("CylinderWidget", "\345\275\223\345\211\215\346\227\266\351\227\264", Q_NULLPTR));
        backward->setText(QApplication::translate("CylinderWidget", "\345\220\221\345\220\216", Q_NULLPTR));
        refresh->setText(QApplication::translate("CylinderWidget", "\345\210\267\346\226\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CylinderWidget: public Ui_CylinderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CYLINDERWIDGET_H
