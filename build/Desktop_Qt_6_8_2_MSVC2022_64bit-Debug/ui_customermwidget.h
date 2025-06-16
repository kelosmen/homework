/********************************************************************************
** Form generated from reading UI file 'customermwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERMWIDGET_H
#define UI_CUSTOMERMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerMWdiget
{
public:

    void setupUi(QWidget *CustomerMWdiget)
    {
        if (CustomerMWdiget->objectName().isEmpty())
            CustomerMWdiget->setObjectName("CustomerMWdiget");
        CustomerMWdiget->resize(899, 648);

        retranslateUi(CustomerMWdiget);

        QMetaObject::connectSlotsByName(CustomerMWdiget);
    } // setupUi

    void retranslateUi(QWidget *CustomerMWdiget)
    {
        CustomerMWdiget->setWindowTitle(QCoreApplication::translate("CustomerMWdiget", "\351\241\276\345\256\242\347\225\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomerMWdiget: public Ui_CustomerMWdiget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERMWIDGET_H
