/********************************************************************************
** Form generated from reading UI file 'excelwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXCELWIDGET_H
#define UI_EXCELWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mymaterialflatbutton.h>
#include <qtmaterialtextfield.h>
#include <qtmaterialtoggle.h>

QT_BEGIN_NAMESPACE

class Ui_ExcelWidget
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    MyMaterialFlatButton *forward;
    QLabel *TimeLabel;
    MyMaterialFlatButton *backward;
    QLabel *label;
    QtMaterialToggle *AllExport;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QtMaterialTextField *lineEdit;
    MyMaterialFlatButton *Delete;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QComboBox *comboBox_2;
    MyMaterialFlatButton *NowExport;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *ExcelWidget)
    {
        if (ExcelWidget->objectName().isEmpty())
            ExcelWidget->setObjectName(QStringLiteral("ExcelWidget"));
        ExcelWidget->resize(507, 340);
        ExcelWidget->setStyleSheet(QLatin1String("QWidget#ExcelWidget{\n"
"background-color:#1F1F1F;\n"
"}\n"
""));
        verticalLayout_5 = new QVBoxLayout(ExcelWidget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_5 = new QLabel(ExcelWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        font.setPointSize(17);
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral("color:white"));

        verticalLayout->addWidget(label_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        forward = new MyMaterialFlatButton(ExcelWidget);
        forward->setObjectName(QStringLiteral("forward"));
        forward->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(forward);

        TimeLabel = new QLabel(ExcelWidget);
        TimeLabel->setObjectName(QStringLiteral("TimeLabel"));
        TimeLabel->setStyleSheet(QStringLiteral("color:white"));

        horizontalLayout->addWidget(TimeLabel);

        backward = new MyMaterialFlatButton(ExcelWidget);
        backward->setObjectName(QStringLiteral("backward"));
        backward->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(backward);

        label = new QLabel(ExcelWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("color:white\n"
""));

        horizontalLayout->addWidget(label);

        AllExport = new QtMaterialToggle(ExcelWidget);
        AllExport->setObjectName(QStringLiteral("AllExport"));
        AllExport->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(AllExport);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(ExcelWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("color:white"));

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lineEdit = new QtMaterialTextField(ExcelWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);

        Delete = new MyMaterialFlatButton(ExcelWidget);
        Delete->setObjectName(QStringLiteral("Delete"));
        Delete->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(Delete);

        horizontalLayout_3->setStretch(0, 4);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(ExcelWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("color:white"));

        verticalLayout_3->addWidget(label_3);

        comboBox = new QComboBox(ExcelWidget);
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

        verticalLayout_3->addWidget(comboBox);


        verticalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(ExcelWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("color:white"));

        verticalLayout_4->addWidget(label_4);

        comboBox_2 = new QComboBox(ExcelWidget);
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

        verticalLayout_4->addWidget(comboBox_2);


        verticalLayout->addLayout(verticalLayout_4);

        NowExport = new MyMaterialFlatButton(ExcelWidget);
        NowExport->setObjectName(QStringLiteral("NowExport"));
        NowExport->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(NowExport);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 3);
        horizontalLayout_2->setStretch(2, 2);

        verticalLayout_5->addLayout(horizontalLayout_2);


        retranslateUi(ExcelWidget);

        QMetaObject::connectSlotsByName(ExcelWidget);
    } // setupUi

    void retranslateUi(QWidget *ExcelWidget)
    {
        ExcelWidget->setWindowTitle(QApplication::translate("ExcelWidget", "Form", Q_NULLPTR));
        label_5->setText(QApplication::translate("ExcelWidget", "\345\257\274\345\207\272", Q_NULLPTR));
        forward->setText(QApplication::translate("ExcelWidget", "\345\220\221\345\211\215", Q_NULLPTR));
        TimeLabel->setText(QApplication::translate("ExcelWidget", "TextLabel", Q_NULLPTR));
        backward->setText(QApplication::translate("ExcelWidget", "\345\220\221\345\220\216", Q_NULLPTR));
        label->setText(QApplication::translate("ExcelWidget", "\345\205\250\351\203\250\345\257\274\345\207\272?", Q_NULLPTR));
        AllExport->setText(QString());
        label_2->setText(QApplication::translate("ExcelWidget", "\346\226\207\344\273\266\345\220\215", Q_NULLPTR));
        lineEdit->setText(QString());
        Delete->setText(QApplication::translate("ExcelWidget", "\303\227", Q_NULLPTR));
        label_3->setText(QApplication::translate("ExcelWidget", "\346\226\207\344\273\266\346\240\274\345\274\217", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ExcelWidget", "Excel\346\226\207\344\273\266 (.xlsx)", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("ExcelWidget", "\346\227\266\351\227\264\345\235\227\346\240\274\345\274\217", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("ExcelWidget", "\346\214\211\346\240\207\347\255\276\345\210\206\347\273\204", Q_NULLPTR)
         << QApplication::translate("ExcelWidget", "\346\214\211\346\227\266\351\227\264\345\210\206\347\273\204", Q_NULLPTR)
        );
        NowExport->setText(QApplication::translate("ExcelWidget", "\345\257\274\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ExcelWidget: public Ui_ExcelWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCELWIDGET_H
