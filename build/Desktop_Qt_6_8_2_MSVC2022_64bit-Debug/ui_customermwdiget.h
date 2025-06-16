/********************************************************************************
** Form generated from reading UI file 'customermwdiget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERMWDIGET_H
#define UI_CUSTOMERMWDIGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerMWdiget
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *CustomerMWdiget)
    {
        if (CustomerMWdiget->objectName().isEmpty())
            CustomerMWdiget->setObjectName("CustomerMWdiget");
        CustomerMWdiget->resize(551, 392);
        pushButton = new QPushButton(CustomerMWdiget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 90, 75, 23));
        pushButton_2 = new QPushButton(CustomerMWdiget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(230, 240, 75, 23));

        retranslateUi(CustomerMWdiget);

        QMetaObject::connectSlotsByName(CustomerMWdiget);
    } // setupUi

    void retranslateUi(QWidget *CustomerMWdiget)
    {
        CustomerMWdiget->setWindowTitle(QCoreApplication::translate("CustomerMWdiget", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("CustomerMWdiget", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CustomerMWdiget", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomerMWdiget: public Ui_CustomerMWdiget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERMWDIGET_H
