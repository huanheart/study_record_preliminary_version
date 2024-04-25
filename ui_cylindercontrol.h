/********************************************************************************
** Form generated from reading UI file 'cylindercontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CYLINDERCONTROL_H
#define UI_CYLINDERCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CylinderControl
{
public:

    void setupUi(QWidget *CylinderControl)
    {
        if (CylinderControl->objectName().isEmpty())
            CylinderControl->setObjectName(QStringLiteral("CylinderControl"));
        CylinderControl->resize(400, 300);

        retranslateUi(CylinderControl);

        QMetaObject::connectSlotsByName(CylinderControl);
    } // setupUi

    void retranslateUi(QWidget *CylinderControl)
    {
        CylinderControl->setWindowTitle(QApplication::translate("CylinderControl", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CylinderControl: public Ui_CylinderControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CYLINDERCONTROL_H
