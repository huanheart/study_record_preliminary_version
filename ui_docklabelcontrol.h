/********************************************************************************
** Form generated from reading UI file 'docklabelcontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKLABELCONTROL_H
#define UI_DOCKLABELCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DockLabelControl
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *CurrentTime;
    QLabel *LabelName;
    QLabel *Time;
    QFrame *frameLine;

    void setupUi(QWidget *DockLabelControl)
    {
        if (DockLabelControl->objectName().isEmpty())
            DockLabelControl->setObjectName(QStringLiteral("DockLabelControl"));
        DockLabelControl->resize(557, 143);
        DockLabelControl->setStyleSheet(QStringLiteral("color:white"));
        verticalLayout = new QVBoxLayout(DockLabelControl);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(DockLabelControl);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("border-image:url(:/Photo/app.ico)"));

        horizontalLayout->addWidget(label);

        CurrentTime = new QLabel(DockLabelControl);
        CurrentTime->setObjectName(QStringLiteral("CurrentTime"));

        horizontalLayout->addWidget(CurrentTime);

        LabelName = new QLabel(DockLabelControl);
        LabelName->setObjectName(QStringLiteral("LabelName"));

        horizontalLayout->addWidget(LabelName);

        Time = new QLabel(DockLabelControl);
        Time->setObjectName(QStringLiteral("Time"));

        horizontalLayout->addWidget(Time);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 2);
        horizontalLayout->setStretch(3, 2);

        verticalLayout->addLayout(horizontalLayout);

        frameLine = new QFrame(DockLabelControl);
        frameLine->setObjectName(QStringLiteral("frameLine"));
        frameLine->setStyleSheet(QStringLiteral("background-color:white"));
        frameLine->setFrameShape(QFrame::StyledPanel);
        frameLine->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frameLine);

        verticalLayout->setStretch(0, 9);
        verticalLayout->setStretch(1, 1);

        retranslateUi(DockLabelControl);

        QMetaObject::connectSlotsByName(DockLabelControl);
    } // setupUi

    void retranslateUi(QWidget *DockLabelControl)
    {
        DockLabelControl->setWindowTitle(QApplication::translate("DockLabelControl", "Form", Q_NULLPTR));
        label->setText(QString());
        CurrentTime->setText(QApplication::translate("DockLabelControl", "\345\275\223\345\211\215\346\227\245\346\234\237", Q_NULLPTR));
        LabelName->setText(QApplication::translate("DockLabelControl", "\346\240\207\347\255\276\345\220\215:", Q_NULLPTR));
        Time->setText(QApplication::translate("DockLabelControl", "\345\257\271\345\272\224\344\273\273\345\212\241\346\227\266\351\227\264", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DockLabelControl: public Ui_DockLabelControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKLABELCONTROL_H
