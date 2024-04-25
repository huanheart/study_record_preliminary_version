/********************************************************************************
** Form generated from reading UI file 'time_record.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIME_RECORD_H
#define UI_TIME_RECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mymaterialflatbutton.h>
#include <qtmaterialtoggle.h>

QT_BEGIN_NAMESPACE

class Ui_Time_record
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QLabel *label_mession;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout;
    QLabel *Study_or_Rest_label;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    MyMaterialFlatButton *OpenUrl;
    QSpacerItem *horizontalSpacer;
    QPushButton *track_time;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Settings;
    QSpacerItem *horizontalSpacer_3;
    MyMaterialFlatButton *additional_widget;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QWidget *Settinngs_widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QSpinBox *spinBox;
    QLabel *label_5;
    QSpinBox *spinBox_2;
    QLabel *label_4;
    QSpinBox *spinBox_3;
    QLabel *AutoConverSation_Label;
    QHBoxLayout *horizontalLayout_5;
    QtMaterialToggle *AutoConverSation;
    QLabel *Auto_label;
    QLabel *notice_voice_Label;
    QHBoxLayout *horizontalLayout_6;
    QtMaterialToggle *notice_voice;
    QLabel *notice_label;
    QLabel *track_PushButton_Label;
    QHBoxLayout *horizontalLayout_7;
    QtMaterialToggle *track_PushButton;
    QLabel *track_label;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QWidget *Time_record)
    {
        if (Time_record->objectName().isEmpty())
            Time_record->setObjectName(QStringLiteral("Time_record"));
        Time_record->resize(850, 451);
        Time_record->setStyleSheet(QLatin1String("QWidget#Time_record{\n"
"background-color:#1F1F1F;\n"
"}\n"
"\n"
""));
        verticalLayout_5 = new QVBoxLayout(Time_record);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        label = new QLabel(Time_record);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("color:white"));

        verticalLayout_2->addWidget(label);

        comboBox = new QComboBox(Time_record);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox->setStyleSheet(QLatin1String("QComboBox{\n"
"  color:#666666;\n"
"  font-size:14px;\n"
"  padding: 1px 15px 1px 3px;\n"
"  border:1px solid rgba(228,228,228,1);\n"
"  border-radius:5px 5px 0px 0px;\n"
"} \n"
"  QComboBox::drop-down {\n"
"      subcontrol-origin: padding;\n"
"      subcontrol-position: top right;\n"
"      width: 15px;\n"
"      border:none;\n"
"  }\n"
"\n"
"QComboBox QAbstractItemView::item{\n"
"	height:36px;\n"
"	color:#666666;\n"
"	padding-left:9px;\n"
"	background-color:#FFFFFF;\n"
"}\n"
"QComboBox QAbstractItemView::item:hover{ \n"
"  background-color:#409CE1;\n"
"  color:#ffffff;\n"
"}\n"
"QComboBox QAbstractItemView::item:selected{\n"
"  background-color:#409CE1;\n"
"  color:#ffffff;\n"
"}\n"
"\n"
"  QComboBox QAbstractItemView{\n"
"	background:rgba(255,255,255,1);\n"
"    border:1px solid rgba(228,228,228,1);\n"
"    border-radius:0px 0px 5px 5px;\n"
"	font-size:14px;\n"
"    outline: 0px;  \n"
"  }"));

        verticalLayout_2->addWidget(comboBox);

        label_2 = new QLabel(Time_record);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("color:white"));

        verticalLayout_2->addWidget(label_2);

        comboBox_2 = new QComboBox(Time_record);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox_2->setStyleSheet(QLatin1String("QComboBox{\n"
"  color:#666666;\n"
"  font-size:14px;\n"
"  padding: 1px 15px 1px 3px;\n"
"  border:1px solid rgba(228,228,228,1);\n"
"  border-radius:5px 5px 0px 0px;\n"
"} \n"
"  QComboBox::drop-down {\n"
"      subcontrol-origin: padding;\n"
"      subcontrol-position: top right;\n"
"      width: 15px;\n"
"      border:none;\n"
"  }\n"
"\n"
"QComboBox QAbstractItemView::item{\n"
"	height:36px;\n"
"	color:#666666;\n"
"	padding-left:9px;\n"
"	background-color:#FFFFFF;\n"
"}\n"
"QComboBox QAbstractItemView::item:hover{ \n"
"  background-color:#409CE1;\n"
"  color:#ffffff;\n"
"}\n"
"QComboBox QAbstractItemView::item:selected{\n"
"  background-color:#409CE1;\n"
"  color:#ffffff;\n"
"}\n"
"\n"
"  QComboBox QAbstractItemView{\n"
"	background:rgba(255,255,255,1);\n"
"    border:1px solid rgba(228,228,228,1);\n"
"    border-radius:0px 0px 5px 5px;\n"
"	font-size:14px;\n"
"    outline: 0px;  \n"
"  }"));

        verticalLayout_2->addWidget(comboBox_2);

        label_mession = new QLabel(Time_record);
        label_mession->setObjectName(QStringLiteral("label_mession"));
        QFont font;
        font.setFamily(QStringLiteral("Lucida Sans Unicode"));
        font.setPointSize(12);
        label_mession->setFont(font);
        label_mession->setStyleSheet(QStringLiteral("color:rgb(255, 255, 255)"));

        verticalLayout_2->addWidget(label_mession);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout_2->setStretch(5, 1);

        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Study_or_Rest_label = new QLabel(Time_record);
        Study_or_Rest_label->setObjectName(QStringLiteral("Study_or_Rest_label"));
        QFont font1;
        font1.setFamily(QStringLiteral("Monotype Corsiva"));
        font1.setPointSize(22);
        font1.setItalic(true);
        Study_or_Rest_label->setFont(font1);
        Study_or_Rest_label->setStyleSheet(QStringLiteral("color:rgb(255, 255, 255)"));

        verticalLayout->addWidget(Study_or_Rest_label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));

        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        OpenUrl = new MyMaterialFlatButton(Time_record);
        OpenUrl->setObjectName(QStringLiteral("OpenUrl"));
        OpenUrl->setCursor(QCursor(Qt::PointingHandCursor));
        OpenUrl->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(OpenUrl);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        track_time = new QPushButton(Time_record);
        track_time->setObjectName(QStringLiteral("track_time"));
        track_time->setCursor(QCursor(Qt::PointingHandCursor));
        track_time->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(track_time);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        Settings = new QPushButton(Time_record);
        Settings->setObjectName(QStringLiteral("Settings"));
        Settings->setCursor(QCursor(Qt::PointingHandCursor));
        Settings->setStyleSheet(QLatin1String("QPushButton{\n"
"border-image:url(:/Photo/Settings.png);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border-image:url(:/Photo/Settings_hover.jpg)\n"
"}\n"
""));

        horizontalLayout_3->addWidget(Settings);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        additional_widget = new MyMaterialFlatButton(Time_record);
        additional_widget->setObjectName(QStringLiteral("additional_widget"));
        QFont font2;
        font2.setFamily(QStringLiteral("Monotype Corsiva"));
        font2.setPointSize(14);
        font2.setItalic(true);
        additional_widget->setFont(font2);
        additional_widget->setCursor(QCursor(Qt::PointingHandCursor));
        additional_widget->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(additional_widget);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(3, 1);
        horizontalLayout_3->setStretch(5, 1);
        horizontalLayout_3->setStretch(7, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 2);
        verticalLayout->setStretch(3, 2);

        horizontalLayout_4->addLayout(verticalLayout);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        horizontalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Settinngs_widget = new QWidget(Time_record);
        Settinngs_widget->setObjectName(QStringLiteral("Settinngs_widget"));
        Settinngs_widget->setStyleSheet(QStringLiteral(""));
        verticalLayout_4 = new QVBoxLayout(Settinngs_widget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_6 = new QLabel(Settinngs_widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_3->addWidget(label_6);

        spinBox = new QSpinBox(Settinngs_widget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimum(2);
        spinBox->setMaximum(20);

        verticalLayout_3->addWidget(spinBox);

        label_5 = new QLabel(Settinngs_widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);

        spinBox_2 = new QSpinBox(Settinngs_widget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setMinimum(2);
        spinBox_2->setMaximum(15);

        verticalLayout_3->addWidget(spinBox_2);

        label_4 = new QLabel(Settinngs_widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);

        spinBox_3 = new QSpinBox(Settinngs_widget);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setLayoutDirection(Qt::LeftToRight);
        spinBox_3->setAutoFillBackground(false);
        spinBox_3->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinBox_3->setMinimum(2);
        spinBox_3->setMaximum(90);

        verticalLayout_3->addWidget(spinBox_3);

        AutoConverSation_Label = new QLabel(Settinngs_widget);
        AutoConverSation_Label->setObjectName(QStringLiteral("AutoConverSation_Label"));

        verticalLayout_3->addWidget(AutoConverSation_Label);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        AutoConverSation = new QtMaterialToggle(Settinngs_widget);
        AutoConverSation->setObjectName(QStringLiteral("AutoConverSation"));
        AutoConverSation->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_5->addWidget(AutoConverSation);

        Auto_label = new QLabel(Settinngs_widget);
        Auto_label->setObjectName(QStringLiteral("Auto_label"));

        horizontalLayout_5->addWidget(Auto_label);


        verticalLayout_3->addLayout(horizontalLayout_5);

        notice_voice_Label = new QLabel(Settinngs_widget);
        notice_voice_Label->setObjectName(QStringLiteral("notice_voice_Label"));

        verticalLayout_3->addWidget(notice_voice_Label);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        notice_voice = new QtMaterialToggle(Settinngs_widget);
        notice_voice->setObjectName(QStringLiteral("notice_voice"));
        notice_voice->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_6->addWidget(notice_voice);

        notice_label = new QLabel(Settinngs_widget);
        notice_label->setObjectName(QStringLiteral("notice_label"));

        horizontalLayout_6->addWidget(notice_label);


        verticalLayout_3->addLayout(horizontalLayout_6);

        track_PushButton_Label = new QLabel(Settinngs_widget);
        track_PushButton_Label->setObjectName(QStringLiteral("track_PushButton_Label"));

        verticalLayout_3->addWidget(track_PushButton_Label);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        track_PushButton = new QtMaterialToggle(Settinngs_widget);
        track_PushButton->setObjectName(QStringLiteral("track_PushButton"));
        track_PushButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_7->addWidget(track_PushButton);

        track_label = new QLabel(Settinngs_widget);
        track_label->setObjectName(QStringLiteral("track_label"));

        horizontalLayout_7->addWidget(track_label);


        verticalLayout_3->addLayout(horizontalLayout_7);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout_2->addWidget(Settinngs_widget);


        horizontalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_7 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);


        horizontalLayout->addLayout(horizontalLayout_8);

        horizontalLayout->setStretch(1, 7);
        horizontalLayout->setStretch(2, 5);
        horizontalLayout->setStretch(3, 2);

        verticalLayout_5->addLayout(horizontalLayout);


        retranslateUi(Time_record);

        QMetaObject::connectSlotsByName(Time_record);
    } // setupUi

    void retranslateUi(QWidget *Time_record)
    {
        Time_record->setWindowTitle(QApplication::translate("Time_record", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Time_record", "\345\275\223\345\211\215\346\227\266\351\222\237\346\240\267\345\274\217", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Time_record", "\350\224\232\350\223\235\346\265\267", Q_NULLPTR)
         << QApplication::translate("Time_record", "\347\202\253\351\205\267\347\264\253\345\275\251", Q_NULLPTR)
         << QApplication::translate("Time_record", "\344\274\230\351\233\205\347\264\253", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("Time_record", "\345\275\223\345\211\215\346\240\207\347\255\276", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Time_record", "\344\270\264\346\227\266\344\274\232\350\257\235", Q_NULLPTR)
        );
        label_mession->setText(QApplication::translate("Time_record", "\347\225\252\350\214\204\345\255\246\344\271\240\346\263\225", Q_NULLPTR));
        Study_or_Rest_label->setText(QApplication::translate("Time_record", "                    Studying", Q_NULLPTR));
        OpenUrl->setText(QApplication::translate("Time_record", "\346\217\220\347\244\272", Q_NULLPTR));
        track_time->setText(QString());
        Settings->setText(QString());
        additional_widget->setText(QApplication::translate("Time_record", "exteral", Q_NULLPTR));
        label_6->setText(QApplication::translate("Time_record", "\347\204\246\347\202\271\344\274\232\350\257\235\346\225\260", Q_NULLPTR));
        label_5->setText(QApplication::translate("Time_record", "\344\274\221\346\201\257\346\227\266\346\256\265", Q_NULLPTR));
        label_4->setText(QApplication::translate("Time_record", "\347\204\246\347\202\271\344\274\232\350\256\256\346\214\201\347\273\255\346\227\266\351\227\264", Q_NULLPTR));
        AutoConverSation_Label->setText(QApplication::translate("Time_record", "\350\207\252\345\212\250\345\274\200\345\247\213\344\274\232\350\257\235\345\222\214\344\274\221\346\201\257", Q_NULLPTR));
        AutoConverSation->setText(QString());
        Auto_label->setText(QApplication::translate("Time_record", "\345\205\263", Q_NULLPTR));
        notice_voice_Label->setText(QApplication::translate("Time_record", "\351\200\232\347\237\245\345\243\260\351\237\263", Q_NULLPTR));
        notice_voice->setText(QString());
        notice_label->setText(QApplication::translate("Time_record", "\345\205\263", Q_NULLPTR));
        track_PushButton_Label->setText(QApplication::translate("Time_record", "\345\220\214\346\255\245\346\227\266\351\227\264\350\277\275\350\270\252", Q_NULLPTR));
        track_PushButton->setText(QString());
        track_label->setText(QApplication::translate("Time_record", "\345\205\263", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Time_record: public Ui_Time_record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIME_RECORD_H
