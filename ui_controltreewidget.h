/********************************************************************************
** Form generated from reading UI file 'controltreewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLTREEWIDGET_H
#define UI_CONTROLTREEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_controltreewidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *controltreewidget)
    {
        if (controltreewidget->objectName().isEmpty())
            controltreewidget->setObjectName(QStringLiteral("controltreewidget"));
        controltreewidget->resize(320, 473);
        controltreewidget->setCursor(QCursor(Qt::ArrowCursor));
        controltreewidget->setStyleSheet(QLatin1String("QWidget {\n"
"background-color: #1F1F1F;\n"
" color: white;\n"
"border: none;\n"
"\n"
"}"));
        verticalLayout = new QVBoxLayout(controltreewidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        treeWidget = new QTreeWidget(controltreewidget);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Photo/max_hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setIcon(0, icon);
        treeWidget->setHeaderItem(__qtreewidgetitem);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Photo/image.png"), QSize(), QIcon::Normal, QIcon::Off);
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Variable Display Semib"));
        font.setPointSize(12);
        font.setBold(true);
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(12);
        font1.setBold(true);
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI Semibold"));
        font2.setPointSize(12);
        font2.setBold(true);
        QFont font3;
        font3.setFamily(QStringLiteral("Segoe UI Semilight"));
        font3.setPointSize(12);
        font3.setBold(true);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem1->setFont(0, font);
        __qtreewidgetitem1->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem2->setFont(0, font1);
        __qtreewidgetitem2->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem3->setFont(0, font1);
        __qtreewidgetitem3->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem4->setFont(0, font1);
        __qtreewidgetitem4->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem5->setFont(0, font2);
        __qtreewidgetitem5->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem6->setFont(0, font2);
        __qtreewidgetitem6->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem7 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem7->setFont(0, font2);
        __qtreewidgetitem7->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem8 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem8->setFont(0, font3);
        __qtreewidgetitem8->setIcon(0, icon1);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));

        horizontalLayout->addWidget(treeWidget);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(controltreewidget);

        QMetaObject::connectSlotsByName(controltreewidget);
    } // setupUi

    void retranslateUi(QWidget *controltreewidget)
    {
        controltreewidget->setWindowTitle(QApplication::translate("controltreewidget", "Form", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("controltreewidget", "1", Q_NULLPTR));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("controltreewidget", "\350\275\256\347\225\252\346\254\243\350\265\217", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("controltreewidget", "\344\273\273\345\212\241", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("controltreewidget", "\346\240\207\347\255\276\346\200\273\350\247\210", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QApplication::translate("controltreewidget", "\346\237\261\347\212\266\345\233\276\345\210\206\346\236\220", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(0, QApplication::translate("controltreewidget", "\345\257\274\345\207\272", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(5);
        ___qtreewidgetitem6->setText(0, QApplication::translate("controltreewidget", "\350\213\261\350\257\255\345\215\225\350\257\215", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget->topLevelItem(6);
        ___qtreewidgetitem7->setText(0, QApplication::translate("controltreewidget", "\346\265\213\350\257\2251", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidget->topLevelItem(7);
        ___qtreewidgetitem8->setText(0, QApplication::translate("controltreewidget", "\346\265\213\350\257\2252", Q_NULLPTR));
        treeWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class controltreewidget: public Ui_controltreewidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLTREEWIDGET_H
