#include "dialog_register.h"
#include "ui_dialog_register.h"
#include"myapp.h"
Dialog_register::Dialog_register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_register)
{
    ui->setupUi(this);
}

Dialog_register::~Dialog_register()
{
    delete ui;
}
void Dialog_register::on_pB_cancel_clicked()
{
    this->close();//取消注册，退出注册界面
}


void Dialog_register::on_pB_confirm_clicked()
{
    QString name=ui->cstm_name->text();
    QString password=ui->cstm_pwd->text();
    QString Repassword=ui->cstm_repsd->text();
    QString email=ui->cstm_email->text();
    QString phone_number=ui->cstm_pnum->text();
    QString address=ui->cstm_address->text();
    QSqlQuery query;
    if(password!=Repassword){
        QMessageBox::information(this,"提示","两次密码不同");
        this->close();
    }
   Myapp::CurrentUserHashPwd=Myapp::hashPassword(password);
    Myapp::CurrentUserName=name;

    QString str=QString("INSERT INTO customer (name,password,email,phone_number,address) values('%1','%2','%3','%4','%5')").arg(name).arg( Myapp::CurrentUserHashPwd).arg(email).arg(phone_number).arg(address);
    if(query.exec(str)==false)
    {
        QMessageBox::information(this,"提示","注册失败");

    }
    else{
        QMessageBox::information(this,"提示","注册成功，请返回登录");
    }
}

