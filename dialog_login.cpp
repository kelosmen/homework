#include "dialog_login.h"
#include "ui_dialog_login.h"
#include<QSqlDatabase>
#include<QDebug>
#include<QSqlError>
Dialog_Login::Dialog_Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog_Login)
{
    ui->setupUi(this);
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setDatabaseName("customer");
    db.setPassword("123456");
    if(!db.open()){
        qDebug()<<"失败的原因："<<db.lastError().text();
    }
    else{
        qDebug()<<"连接成功";
    }
}


Dialog_Login::~Dialog_Login()
{
    delete ui;
}

void Dialog_Login::on_pushButton_login_clicked()
{
    if(ui->radioButton_customer->isChecked())
    {
        customerwidget=new CustomerMWdiget;
        customerwidget->show();

    }
    else if(ui->radioButton_admin->isChecked()){
        adminmwidget=new AdminMWidget;
        adminmwidget->show();
    }
    else{
        QMessageBox::warning(this, "警告", "请选择身份");
    }

    this->close();
}

void Dialog_Login::on_pushButton_register_clicked()
{
    dialog_register=new Dialog_register;
    dialog_register->show();
}

