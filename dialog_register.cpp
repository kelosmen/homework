#include "dialog_register.h"
#include "ui_dialog_register.h"

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

}

