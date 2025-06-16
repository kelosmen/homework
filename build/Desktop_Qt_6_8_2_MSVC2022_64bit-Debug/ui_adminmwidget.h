/********************************************************************************
** Form generated from reading UI file 'adminmwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMWIDGET_H
#define UI_ADMINMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminMWidget
{
public:

    void setupUi(QWidget *AdminMWidget)
    {
        if (AdminMWidget->objectName().isEmpty())
            AdminMWidget->setObjectName("AdminMWidget");
        AdminMWidget->resize(400, 300);

        retranslateUi(AdminMWidget);

        QMetaObject::connectSlotsByName(AdminMWidget);
    } // setupUi

    void retranslateUi(QWidget *AdminMWidget)
    {
        AdminMWidget->setWindowTitle(QCoreApplication::translate("AdminMWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminMWidget: public Ui_AdminMWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMWIDGET_H
