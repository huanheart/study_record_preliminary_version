/********************************************************************************
** Form generated from reading UI file 'labelwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABELWIDGET_H
#define UI_LABELWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LabelWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
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
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QPushButton *Save;
    QPushButton *Query;

    void setupUi(QWidget *LabelWidget)
    {
        if (LabelWidget->objectName().isEmpty())
            LabelWidget->setObjectName(QStringLiteral("LabelWidget"));
        LabelWidget->resize(824, 556);
        LabelWidget->setStyleSheet(QStringLiteral("color:rgb(85, 170, 255)"));
        verticalLayout = new QVBoxLayout(LabelWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        scrollArea = new QScrollArea(LabelWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setStyleSheet(QLatin1String("QWidget#scrollAreaWidgetContents{\n"
"background-color:#ECAD9E  ;\n"
"color:white;\n"
"border:none;\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 802, 534));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelName = new QLabel(scrollAreaWidgetContents);
        labelName->setObjectName(QStringLiteral("labelName"));
        QFont font;
        font.setFamily(QStringLiteral("Mistral"));
        font.setPointSize(11);
        labelName->setFont(font);

        verticalLayout_2->addWidget(labelName);

        lineEdit = new QLineEdit(scrollAreaWidgetContents);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        Detail = new QLabel(scrollAreaWidgetContents);
        Detail->setObjectName(QStringLiteral("Detail"));
        QFont font1;
        font1.setFamily(QStringLiteral("MingLiU_HKSCS-ExtB"));
        font1.setPointSize(12);
        Detail->setFont(font1);

        verticalLayout_2->addWidget(Detail);

        textEdit = new QTextEdit(scrollAreaWidgetContents);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout_2->addWidget(textEdit);

        Type = new QLabel(scrollAreaWidgetContents);
        Type->setObjectName(QStringLiteral("Type"));
        QFont font2;
        font2.setFamily(QStringLiteral("Mistral"));
        font2.setPointSize(14);
        Type->setFont(font2);

        verticalLayout_2->addWidget(Type);

        comboBox = new QComboBox(scrollAreaWidgetContents);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout_2->addWidget(comboBox);

        AddTask = new QPushButton(scrollAreaWidgetContents);
        AddTask->setObjectName(QStringLiteral("AddTask"));
        AddTask->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(AddTask);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        QFont font3;
        font3.setFamily(QStringLiteral("Monotype Corsiva"));
        font3.setPointSize(14);
        font3.setItalic(true);
        label->setFont(font3);

        verticalLayout_2->addWidget(label);

        StarSpinBox = new QDoubleSpinBox(scrollAreaWidgetContents);
        StarSpinBox->setObjectName(QStringLiteral("StarSpinBox"));
        StarSpinBox->setDecimals(1);
        StarSpinBox->setMinimum(1);
        StarSpinBox->setMaximum(5);
        StarSpinBox->setSingleStep(0.5);

        verticalLayout_2->addWidget(StarSpinBox);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        Save = new QPushButton(scrollAreaWidgetContents);
        Save->setObjectName(QStringLiteral("Save"));
        Save->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_3->addWidget(Save);

        Query = new QPushButton(scrollAreaWidgetContents);
        Query->setObjectName(QStringLiteral("Query"));
        Query->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_3->addWidget(Query);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);
        horizontalLayout_2->setStretch(2, 1);

        verticalLayout_4->addLayout(horizontalLayout_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(LabelWidget);

        QMetaObject::connectSlotsByName(LabelWidget);
    } // setupUi

    void retranslateUi(QWidget *LabelWidget)
    {
        LabelWidget->setWindowTitle(QApplication::translate("LabelWidget", "Form", Q_NULLPTR));
        labelName->setText(QApplication::translate("LabelWidget", "\346\240\207\347\255\276\345\220\215", Q_NULLPTR));
        Detail->setText(QApplication::translate("LabelWidget", "\350\257\246\346\203\205\344\277\241\346\201\257", Q_NULLPTR));
        Type->setText(QApplication::translate("LabelWidget", "\347\261\273\345\236\213", Q_NULLPTR));
        AddTask->setText(QApplication::translate("LabelWidget", "\346\267\273\345\212\240\344\273\273\345\212\241", Q_NULLPTR));
        label->setText(QApplication::translate("LabelWidget", "\345\257\271\345\272\224\344\273\273\345\212\241\346\230\237\347\272\247\346\225\260", Q_NULLPTR));
        StarSpinBox->setSuffix(QApplication::translate("LabelWidget", "\351\242\227", Q_NULLPTR));
        Save->setText(QApplication::translate("LabelWidget", "\344\277\235\345\255\230", Q_NULLPTR));
        Query->setText(QApplication::translate("LabelWidget", "\357\274\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LabelWidget: public Ui_LabelWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABELWIDGET_H
