/********************************************************************************
** Form generated from reading UI file 'controltabwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLTABWIDGET_H
#define UI_CONTROLTABWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <bannawidget.h>
#include <cylinderwidget.h>
#include <excelwidget.h>
#include <listwidget.h>
#include <mymaterialautocomplete.h>
#include <mymaterialflatbutton.h>
#include <time_record.h>

QT_BEGIN_NAMESPACE

class Ui_controltabwidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    BannaWidget *tabBanna;
    QWidget *tab_3;
    ListWidget *widget_2;
    QWidget *searchWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    MyMaterialAutoComplete *searchBox;
    MyMaterialFlatButton *look;
    QLabel *Bird_label;
    MyMaterialFlatButton *AddLabel;
    QSpacerItem *horizontalSpacer;
    CylinderWidget *tab_4;
    Time_record *tab_2;
    QWidget *tab;
    QPushButton *pushButton;
    ExcelWidget *tab_5;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *controltabwidget)
    {
        if (controltabwidget->objectName().isEmpty())
            controltabwidget->setObjectName(QStringLiteral("controltabwidget"));
        controltabwidget->resize(890, 496);
        controltabwidget->setStyleSheet(QLatin1String("QWidget#controltabwidget{\n"
"background-color:#1F1F1F;\n"
"}\n"
"border:0;"));
        verticalLayout = new QVBoxLayout(controltabwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabWidget = new QTabWidget(controltabwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QLatin1String("QWidget#tab_2{\n"
"background-color:#1F1F1F;\n"
"}\n"
"QWidget#tabBanna{\n"
"background-color:#1F1F1F;\n"
"}\n"
"QWidget#tab_4{\n"
"background-color:#1F1F1F;\n"
"}\n"
"QWidget\n"
"{\n"
"border:0;\n"
"}\n"
"QWidget#tab{\n"
"background-color:#1F1F1F;\n"
"}\n"
""));
        tabBanna = new BannaWidget();
        tabBanna->setObjectName(QStringLiteral("tabBanna"));
        tabWidget->addTab(tabBanna, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tab_3->setStyleSheet(QLatin1String("QWidget#tab_3\n"
"{\n"
"background-color:#1F1F1F\n"
"}"));
        widget_2 = new ListWidget(tab_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(0, 110, 871, 421));
        widget_2->setStyleSheet(QStringLiteral(""));
        searchWidget = new QWidget(tab_3);
        searchWidget->setObjectName(QStringLiteral("searchWidget"));
        searchWidget->setGeometry(QRect(0, 0, 871, 111));
        searchWidget->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
" color:rgb(0, 170, 255)\n"
" }\n"
"QWidget#searchWidget{\n"
"background-color:#ECAD9E  ;\n"
"color:white;\n"
"border:none;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(searchWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(searchWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Monotype Corsiva"));
        font.setPointSize(12);
        font.setItalic(true);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color:rgb(0, 255, 255)"));

        horizontalLayout_3->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        searchBox = new MyMaterialAutoComplete(searchWidget);
        searchBox->setObjectName(QStringLiteral("searchBox"));
        searchBox->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(searchBox);

        look = new MyMaterialFlatButton(searchWidget);
        look->setObjectName(QStringLiteral("look"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe Print"));
        font1.setPointSize(14);
        font1.setBold(true);
        look->setFont(font1);
        look->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(look);

        Bird_label = new QLabel(searchWidget);
        Bird_label->setObjectName(QStringLiteral("Bird_label"));
        Bird_label->setStyleSheet(QStringLiteral("border-image:url(:/Photo/label.svg)"));

        horizontalLayout_2->addWidget(Bird_label);

        AddLabel = new MyMaterialFlatButton(searchWidget);
        AddLabel->setObjectName(QStringLiteral("AddLabel"));
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI Black"));
        font2.setPointSize(14);
        font2.setBold(true);
        AddLabel->setFont(font2);
        AddLabel->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(AddLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_2->setStretch(0, 9);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 1);
        horizontalLayout_2->setStretch(4, 4);

        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 4);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new CylinderWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_2 = new Time_record();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_2->setStyleSheet(QLatin1String("QWidget#tab_2\n"
"{\n"
"background-color:#1F1F1F\n"
"}"));
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(350, 180, 231, 24));
        pushButton->setStyleSheet(QStringLiteral("color:rgb(0, 255, 255)"));
        tabWidget->addTab(tab, QString());
        tab_5 = new ExcelWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tab_5->setStyleSheet(QLatin1String("QWidget#tab_5{\n"
"background-color:#1F1F1F;\n"
"}"));
        tabWidget->addTab(tab_5, QString());

        horizontalLayout->addWidget(tabWidget);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(0, 10);
        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(controltabwidget);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(controltabwidget);
    } // setupUi

    void retranslateUi(QWidget *controltabwidget)
    {
        controltabwidget->setWindowTitle(QApplication::translate("controltabwidget", "Form", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabBanna), QApplication::translate("controltabwidget", "1", Q_NULLPTR));
        label->setText(QApplication::translate("controltabwidget", "\346\220\234\347\264\242\347\202\271\344\270\213\346\226\271", Q_NULLPTR));
        searchBox->setText(QString());
        look->setText(QApplication::translate("controltabwidget", "\346\220\234\347\264\242", Q_NULLPTR));
        Bird_label->setText(QString());
        AddLabel->setText(QApplication::translate("controltabwidget", "\345\273\272\347\253\213\346\226\260\346\240\207\347\255\276", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("controltabwidget", "\351\241\265", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("controltabwidget", "\351\241\265", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("controltabwidget", "Tab 2", Q_NULLPTR));
        pushButton->setText(QApplication::translate("controltabwidget", "\344\270\216go\344\272\244\344\272\222\347\232\204\350\213\261\350\257\255\345\215\225\350\257\215\351\241\265\351\235\242", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("controltabwidget", "\351\241\265", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("controltabwidget", "\351\241\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class controltabwidget: public Ui_controltabwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLTABWIDGET_H
