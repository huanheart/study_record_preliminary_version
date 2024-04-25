/********************************************************************************
** Form generated from reading UI file 'coolpage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COOLPAGE_H
#define UI_COOLPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_coolpage
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *coolpage)
    {
        if (coolpage->objectName().isEmpty())
            coolpage->setObjectName(QStringLiteral("coolpage"));
        coolpage->resize(880, 52);
        coolpage->setStyleSheet(QLatin1String("\n"
"\n"
"QWidget#coolpage{\n"
"background-color:#333333;\n"
"}"));
        horizontalLayout = new QHBoxLayout(coolpage);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(coolpage);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Arial Black"));
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color:rgb(255, 255, 255)"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(coolpage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("image: url(:/Photo/app.ico);"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(489, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(coolpage);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(coolpage);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(coolpage);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 10);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 1);
        horizontalLayout->setStretch(5, 1);

        retranslateUi(coolpage);

        QMetaObject::connectSlotsByName(coolpage);
    } // setupUi

    void retranslateUi(QWidget *coolpage)
    {
        coolpage->setWindowTitle(QApplication::translate("coolpage", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("coolpage", "QPoolSage", Q_NULLPTR));
        label_2->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class coolpage: public Ui_coolpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COOLPAGE_H
