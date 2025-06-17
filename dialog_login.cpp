#include "dialog_login.h"
#include "ui_dialog_login.h"
#include"myapp.h"
Dialog_Login::Dialog_Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog_Login)
{
    ui->setupUi(this);
    ui->lineEdit_UPassword->setEchoMode(QLineEdit::Password);//使屏幕上不显示密码

}


Dialog_Login::~Dialog_Login()
{
    delete ui;
}

bool Dialog_Login::verifyLogin(const QString &username, const QString &password)//用户密码验证
{
    QSqlQuery query;
    if(ui->radioButton_customer->isChecked())//顾客身份
    {
        query.prepare("SELECT password FROM customer WHERE name = :username");//此处的：username是占位符，后续提供值
        Myapp::CurrentUserType="customer";
    }
    if(ui->radioButton_admin->isChecked())
    {
        query.prepare("SELECT password FROM staff WHERE name = :username");
          Myapp::CurrentUserType="admin";
    }
    query.bindValue(":username", username);

    if (!query.exec()) {
        qDebug() << "查询失败:" << query.lastError().text();
        return false;
    }

    if (query.next()) {
        QString hashpassword=Myapp::hashPassword(password);
        QString storedPassword = query.value(0).toString();
        return storedPassword == hashpassword;
    } else {
        return false;
    }
}

void Dialog_Login::on_pushButton_login_clicked()
{
    QString user_name=ui->lineEdit_UserName->text();
    QString user_pwd=ui->lineEdit_UPassword->text();
    if(user_name.isEmpty()||user_pwd.isEmpty()){
          QMessageBox::warning(this, "警告", "用户名或密码不能为空");
    }
    else{
        if(ui->radioButton_customer->isChecked())//顾客身份
    {
            if(verifyLogin(user_name,user_pwd))
            {
        customerwidget=new CustomerMWdiget;
                customerwidget->show();
                this->close();
            }

    }
    else if(ui->radioButton_admin->isChecked()){//管理员身份
            if(verifyLogin(user_name,user_pwd))
            {
                adminmwidget=new AdminMWidget;
                adminmwidget->show();
                this->close();
            }

    }
    else{
          QMessageBox::warning(this, "警告", "请选择身份");
    }

       }



}

void Dialog_Login::on_pushButton_register_clicked()
{
    dialog_register=new Dialog_register;
    dialog_register->show();
}

