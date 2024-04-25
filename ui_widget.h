/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include <controltabwidget.h>
#include <controltreewidget.h>
#include <coolpage.h>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    coolpage *column;
    controltabwidget *widgetTab;
    controltreewidget *widgetTree;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1108, 647);
        Widget->setStyleSheet(QLatin1String("QWidget#Widget{\n"
"background-color:#1F1F1F;\n"
"border:0;\n"
"border-radius:10px;\n"
"border-style:solid;\n"
"border-width:2px;\n"
"}"));
        column = new coolpage(Widget);
        column->setObjectName(QStringLiteral("column"));
        column->setGeometry(QRect(0, 0, 1108, 40));
        widgetTab = new controltabwidget(Widget);
        widgetTab->setObjectName(QStringLiteral("widgetTab"));
        widgetTab->setGeometry(QRect(220, 40, 881, 611));
        widgetTab->setStyleSheet(QStringLiteral(""));
        widgetTree = new controltreewidget(Widget);
        widgetTree->setObjectName(QStringLiteral("widgetTree"));
        widgetTree->setGeometry(QRect(0, 40, 220, 601));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
