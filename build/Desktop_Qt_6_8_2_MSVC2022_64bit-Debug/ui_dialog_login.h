/********************************************************************************
** Form generated from reading UI file 'dialog_login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_LOGIN_H
#define UI_DIALOG_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_Login
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_UserName;
    QLineEdit *lineEdit_UPassword;
    QPushButton *pushButton_login;
    QPushButton *pushButton_register;
    QRadioButton *radioButton_custmer;
    QRadioButton *radioButton_admin;

    void setupUi(QDialog *Dialog_Login)
    {
        if (Dialog_Login->objectName().isEmpty())
            Dialog_Login->setObjectName("Dialog_Login");
        Dialog_Login->resize(545, 357);
        label = new QLabel(Dialog_Login);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 10, 91, 71));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(Dialog_Login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 70, 81, 71));
        label_2->setFont(font);
        lineEdit_UserName = new QLineEdit(Dialog_Login);
        lineEdit_UserName->setObjectName("lineEdit_UserName");
        lineEdit_UserName->setGeometry(QRect(160, 30, 271, 41));
        lineEdit_UPassword = new QLineEdit(Dialog_Login);
        lineEdit_UPassword->setObjectName("lineEdit_UPassword");
        lineEdit_UPassword->setGeometry(QRect(160, 90, 271, 41));
        pushButton_login = new QPushButton(Dialog_Login);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(150, 240, 91, 41));
        QFont font1;
        font1.setPointSize(16);
        pushButton_login->setFont(font1);
        pushButton_register = new QPushButton(Dialog_Login);
        pushButton_register->setObjectName("pushButton_register");
        pushButton_register->setGeometry(QRect(280, 240, 91, 41));
        pushButton_register->setFont(font1);
        radioButton_custmer = new QRadioButton(Dialog_Login);
        radioButton_custmer->setObjectName("radioButton_custmer");
        radioButton_custmer->setGeometry(QRect(140, 170, 101, 31));
        QFont font2;
        font2.setPointSize(18);
        radioButton_custmer->setFont(font2);
        radioButton_admin = new QRadioButton(Dialog_Login);
        radioButton_admin->setObjectName("radioButton_admin");
        radioButton_admin->setGeometry(QRect(270, 170, 101, 31));
        radioButton_admin->setFont(font2);

        retranslateUi(Dialog_Login);

        QMetaObject::connectSlotsByName(Dialog_Login);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Login)
    {
        Dialog_Login->setWindowTitle(QCoreApplication::translate("Dialog_Login", "\347\224\265\345\225\206\350\256\242\345\215\225\345\244\204\347\220\206\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("Dialog_Login", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_Login", "\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton_login->setText(QCoreApplication::translate("Dialog_Login", "\347\231\273\345\275\225", nullptr));
        pushButton_register->setText(QCoreApplication::translate("Dialog_Login", "\346\263\250\345\206\214", nullptr));
        radioButton_custmer->setText(QCoreApplication::translate("Dialog_Login", "\351\241\276\345\256\242", nullptr));
        radioButton_admin->setText(QCoreApplication::translate("Dialog_Login", "\347\256\241\347\220\206\345\221\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_Login: public Ui_Dialog_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_LOGIN_H
