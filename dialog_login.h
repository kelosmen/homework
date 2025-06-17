#ifndef DIALOG_LOGIN_H
#define DIALOG_LOGIN_H

#include <QDialog>
#include"customermwidget.h"
#include"adminmwidget.h"
#include"dialog_register.h"
#include<QMessageBox>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QSqlError>
QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog_Login;
}
QT_END_NAMESPACE

class Dialog_Login : public QDialog
{
    Q_OBJECT

public:
    Dialog_Login(QWidget *parent = nullptr);
    ~Dialog_Login();

private slots:
    void on_pushButton_login_clicked();

    void on_pushButton_register_clicked();
    bool verifyLogin(const QString &username, const QString &password);

private:
    Ui::Dialog_Login *ui;
    //定义界面的指针变量
    CustomerMWdiget* customerwidget;//顾客的主界面
    AdminMWidget* adminmwidget;//管理员的主界面
    Dialog_register* dialog_register;//注册页面对话框
};

#endif // DIALOG_LOGIN_H
