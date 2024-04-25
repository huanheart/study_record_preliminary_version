/********************************************************************************
** Form generated from reading UI file 'listwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTWIDGET_H
#define UI_LISTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frameBackground;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *ListWidget)
    {
        if (ListWidget->objectName().isEmpty())
            ListWidget->setObjectName(QStringLiteral("ListWidget"));
        ListWidget->resize(648, 300);
        verticalLayout = new QVBoxLayout(ListWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frameBackground = new QFrame(ListWidget);
        frameBackground->setObjectName(QStringLiteral("frameBackground"));
        frameBackground->setFrameShape(QFrame::StyledPanel);
        frameBackground->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frameBackground);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        scrollArea = new QScrollArea(frameBackground);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setStyleSheet(QLatin1String("QWidget#scrollAreaWidgetContents{\n"
"background-color:#1A1A1A  ;\n"
"color:white;\n"
"border:none;\n"
"}\n"
"\n"
""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 578, 276));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 75 11pt \"\345\256\213\344\275\223\";\n"
"}\n"
"\n"
""));
        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(0, 1);

        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(frameBackground);


        retranslateUi(ListWidget);

        QMetaObject::connectSlotsByName(ListWidget);
    } // setupUi

    void retranslateUi(QWidget *ListWidget)
    {
        ListWidget->setWindowTitle(QApplication::translate("ListWidget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ListWidget: public Ui_ListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTWIDGET_H
