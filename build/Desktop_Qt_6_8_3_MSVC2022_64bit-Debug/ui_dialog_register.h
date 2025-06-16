/********************************************************************************
** Form generated from reading UI file 'dialog_register.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_REGISTER_H
#define UI_DIALOG_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_register
{
public:
    QGroupBox *groupBox;
    QLabel *name;
    QLabel *pwd;
    QLabel *repwd;
    QLabel *adress;
    QLabel *phone;
    QLabel *email;
    QLineEdit *cstm_name;
    QLineEdit *cstm_pwd;
    QLineEdit *cstm_repsd;
    QLineEdit *cstm_pnum;
    QLineEdit *cstm_email;
    QLineEdit *cstm_address;
    QLabel *label;
    QPushButton *pB_confirm;
    QPushButton *pB_cancel;

    void setupUi(QDialog *Dialog_register)
    {
        if (Dialog_register->objectName().isEmpty())
            Dialog_register->setObjectName("Dialog_register");
        Dialog_register->resize(640, 496);
        groupBox = new QGroupBox(Dialog_register);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(80, 60, 481, 331));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font.setPointSize(18);
        groupBox->setFont(font);
        name = new QLabel(groupBox);
        name->setObjectName("name");
        name->setGeometry(QRect(40, 20, 111, 30));
        name->setFont(font);
        pwd = new QLabel(groupBox);
        pwd->setObjectName("pwd");
        pwd->setGeometry(QRect(40, 60, 71, 31));
        pwd->setFont(font);
        repwd = new QLabel(groupBox);
        repwd->setObjectName("repwd");
        repwd->setGeometry(QRect(10, 110, 131, 30));
        repwd->setFont(font);
        adress = new QLabel(groupBox);
        adress->setObjectName("adress");
        adress->setGeometry(QRect(20, 270, 71, 31));
        adress->setFont(font);
        phone = new QLabel(groupBox);
        phone->setObjectName("phone");
        phone->setGeometry(QRect(20, 160, 81, 31));
        phone->setFont(font);
        email = new QLabel(groupBox);
        email->setObjectName("email");
        email->setGeometry(QRect(0, 210, 141, 31));
        email->setFont(font);
        cstm_name = new QLineEdit(groupBox);
        cstm_name->setObjectName("cstm_name");
        cstm_name->setGeometry(QRect(130, 10, 241, 41));
        cstm_pwd = new QLineEdit(groupBox);
        cstm_pwd->setObjectName("cstm_pwd");
        cstm_pwd->setGeometry(QRect(120, 60, 241, 41));
        cstm_repsd = new QLineEdit(groupBox);
        cstm_repsd->setObjectName("cstm_repsd");
        cstm_repsd->setGeometry(QRect(120, 110, 241, 41));
        cstm_pnum = new QLineEdit(groupBox);
        cstm_pnum->setObjectName("cstm_pnum");
        cstm_pnum->setGeometry(QRect(120, 160, 241, 41));
        cstm_email = new QLineEdit(groupBox);
        cstm_email->setObjectName("cstm_email");
        cstm_email->setGeometry(QRect(110, 210, 341, 41));
        cstm_address = new QLineEdit(groupBox);
        cstm_address->setObjectName("cstm_address");
        cstm_address->setGeometry(QRect(90, 270, 341, 41));
        label = new QLabel(Dialog_register);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 30, 323, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font1.setPointSize(20);
        label->setFont(font1);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pB_confirm = new QPushButton(Dialog_register);
        pB_confirm->setObjectName("pB_confirm");
        pB_confirm->setGeometry(QRect(140, 430, 101, 51));
        QFont font2;
        font2.setPointSize(18);
        pB_confirm->setFont(font2);
        pB_cancel = new QPushButton(Dialog_register);
        pB_cancel->setObjectName("pB_cancel");
        pB_cancel->setGeometry(QRect(360, 430, 101, 51));
        pB_cancel->setFont(font2);

        retranslateUi(Dialog_register);

        QMetaObject::connectSlotsByName(Dialog_register);
    } // setupUi

    void retranslateUi(QDialog *Dialog_register)
    {
        Dialog_register->setWindowTitle(QCoreApplication::translate("Dialog_register", "Dialog", nullptr));
        groupBox->setTitle(QString());
        name->setText(QCoreApplication::translate("Dialog_register", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        pwd->setText(QCoreApplication::translate("Dialog_register", "\345\257\206\347\240\201\357\274\232", nullptr));
        repwd->setText(QCoreApplication::translate("Dialog_register", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        adress->setText(QCoreApplication::translate("Dialog_register", "\345\234\260\345\235\200\357\274\232", nullptr));
        phone->setText(QCoreApplication::translate("Dialog_register", "\347\224\265\350\257\235\357\274\232", nullptr));
        email->setText(QCoreApplication::translate("Dialog_register", "\347\224\265\345\255\220\351\202\256\347\256\261\357\274\232", nullptr));
        cstm_name->setPlaceholderText(QCoreApplication::translate("Dialog_register", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        cstm_pwd->setPlaceholderText(QCoreApplication::translate("Dialog_register", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        cstm_repsd->setPlaceholderText(QCoreApplication::translate("Dialog_register", "\350\257\267\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        cstm_pnum->setPlaceholderText(QCoreApplication::translate("Dialog_register", "\350\257\267\350\276\223\345\205\245\347\224\265\350\257\235\345\217\267\347\240\201", nullptr));
        cstm_email->setPlaceholderText(QCoreApplication::translate("Dialog_register", "\350\257\267\350\276\223\345\205\245\351\202\256\347\256\261\345\234\260\345\235\200", nullptr));
        cstm_address->setPlaceholderText(QCoreApplication::translate("Dialog_register", "\350\257\267\350\276\223\345\205\245\345\217\257\344\273\245\346\224\266\350\264\247\347\232\204\350\257\246\347\273\206\345\234\260\345\235\200", nullptr));
        label->setText(QCoreApplication::translate("Dialog_register", "\351\241\276\345\256\242\346\263\250\345\206\214", nullptr));
        pB_confirm->setText(QCoreApplication::translate("Dialog_register", "\347\241\256\345\256\232", nullptr));
        pB_cancel->setText(QCoreApplication::translate("Dialog_register", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_register: public Ui_Dialog_register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_REGISTER_H
