/********************************************************************************
** Form generated from reading UI file 'currentlistcontrolwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURRENTLISTCONTROLWIDGET_H
#define UI_CURRENTLISTCONTROLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mymaterialflatbutton.h>

QT_BEGIN_NAMESPACE

class Ui_CurrentListControlWidget
{
public:
    QVBoxLayout *verticalLayout_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelName;
    QLineEdit *lineEdit;
    QLabel *Detail;
    QTextEdit *textEdit;
    QLabel *Type;
    QComboBox *comboBox;
    QPushButton *AddTask;
    QLabel *label;
    QDoubleSpinBox *StarSpinBox;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    MyMaterialFlatButton *Save;
    MyMaterialFlatButton *pushButton;
    MyMaterialFlatButton *Query;

    void setupUi(QWidget *CurrentListControlWidget)
    {
        if (CurrentListControlWidget->objectName().isEmpty())
            CurrentListControlWidget->setObjectName(QStringLiteral("CurrentListControlWidget"));
        CurrentListControlWidget->resize(865, 482);
        CurrentListControlWidget->setStyleSheet(QStringLiteral(""));
        verticalLayout_4 = new QVBoxLayout(CurrentListControlWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        frame = new QFrame(CurrentListControlWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QLatin1String("QWidget#frame{\n"
"background-color:#ECAD9E  ;\n"
"color:white;\n"
"border:none;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelName = new QLabel(frame);
        labelName->setObjectName(QStringLiteral("labelName"));
        QFont font;
        font.setFamily(QStringLiteral("Mistral"));
        font.setPointSize(11);
        labelName->setFont(font);

        verticalLayout_2->addWidget(labelName);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        Detail = new QLabel(frame);
        Detail->setObjectName(QStringLiteral("Detail"));
        QFont font1;
        font1.setFamily(QStringLiteral("MingLiU_HKSCS-ExtB"));
        font1.setPointSize(12);
        Detail->setFont(font1);

        verticalLayout_2->addWidget(Detail);

        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout_2->addWidget(textEdit);

        Type = new QLabel(frame);
        Type->setObjectName(QStringLiteral("Type"));
        QFont font2;
        font2.setFamily(QStringLiteral("Mistral"));
        font2.setPointSize(14);
        Type->setFont(font2);

        verticalLayout_2->addWidget(Type);

        comboBox = new QComboBox(frame);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout_2->addWidget(comboBox);

        AddTask = new QPushButton(frame);
        AddTask->setObjectName(QStringLiteral("AddTask"));
        AddTask->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(AddTask);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        QFont font3;
        font3.setFamily(QStringLiteral("Monotype Corsiva"));
        font3.setPointSize(14);
        font3.setItalic(true);
        label->setFont(font3);

        verticalLayout_2->addWidget(label);

        StarSpinBox = new QDoubleSpinBox(frame);
        StarSpinBox->setObjectName(QStringLiteral("StarSpinBox"));
        StarSpinBox->setDecimals(1);
        StarSpinBox->setMinimum(1);
        StarSpinBox->setMaximum(5);
        StarSpinBox->setSingleStep(0.5);

        verticalLayout_2->addWidget(StarSpinBox);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        Save = new MyMaterialFlatButton(frame);
        Save->setObjectName(QStringLiteral("Save"));
        Save->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_3->addWidget(Save);

        pushButton = new MyMaterialFlatButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_3->addWidget(pushButton);

        Query = new MyMaterialFlatButton(frame);
        Query->setObjectName(QStringLiteral("Query"));
        Query->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_3->addWidget(Query);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);

        verticalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout_4->addWidget(frame);


        retranslateUi(CurrentListControlWidget);

        QMetaObject::connectSlotsByName(CurrentListControlWidget);
    } // setupUi

    void retranslateUi(QWidget *CurrentListControlWidget)
    {
        CurrentListControlWidget->setWindowTitle(QApplication::translate("CurrentListControlWidget", "Form", Q_NULLPTR));
        labelName->setText(QApplication::translate("CurrentListControlWidget", "\346\240\207\347\255\276\345\220\215", Q_NULLPTR));
        Detail->setText(QApplication::translate("CurrentListControlWidget", "\350\257\246\346\203\205\344\277\241\346\201\257", Q_NULLPTR));
        Type->setText(QApplication::translate("CurrentListControlWidget", "\347\261\273\345\236\213", Q_NULLPTR));
        AddTask->setText(QApplication::translate("CurrentListControlWidget", "\346\267\273\345\212\240\344\273\273\345\212\241", Q_NULLPTR));
        label->setText(QApplication::translate("CurrentListControlWidget", "\345\257\271\345\272\224\344\273\273\345\212\241\346\230\237\347\272\247\346\225\260", Q_NULLPTR));
        StarSpinBox->setSuffix(QApplication::translate("CurrentListControlWidget", "\351\242\227", Q_NULLPTR));
        Save->setText(QApplication::translate("CurrentListControlWidget", "\344\277\235\345\255\230", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CurrentListControlWidget", "\345\210\240\351\231\244", Q_NULLPTR));
        Query->setText(QApplication::translate("CurrentListControlWidget", "\357\274\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CurrentListControlWidget: public Ui_CurrentListControlWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURRENTLISTCONTROLWIDGET_H
