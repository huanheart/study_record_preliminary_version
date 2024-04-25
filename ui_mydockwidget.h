/********************************************************************************
** Form generated from reading UI file 'mydockwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDOCKWIDGET_H
#define UI_MYDOCKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyDockWidget
{
public:
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *MyDockWidget)
    {
        if (MyDockWidget->objectName().isEmpty())
            MyDockWidget->setObjectName(QStringLiteral("MyDockWidget"));
        MyDockWidget->resize(431, 300);
        MyDockWidget->setStyleSheet(QLatin1String("QWidget{\n"
"background-color:#1F1F1F;\n"
"}"));
        frame = new QFrame(MyDockWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 431, 300));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 407, 276));
        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(MyDockWidget);

        QMetaObject::connectSlotsByName(MyDockWidget);
    } // setupUi

    void retranslateUi(QWidget *MyDockWidget)
    {
        MyDockWidget->setWindowTitle(QApplication::translate("MyDockWidget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyDockWidget: public Ui_MyDockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDOCKWIDGET_H
