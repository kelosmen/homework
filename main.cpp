#include "dialog_login.h"
#include <QApplication>
#include <QRadioButton>
#include <QPushButton>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QDebug>
#include<QSqlError>
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    //连接数据库
    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("e commerce_order_processing_system");
    db.setUserName("root");
    db.setPassword("123456");
    if(db.open()){
        qDebug()<<"yes";
    }
    //else {qDebug()<<"no";}
    //qDebug()<<Myapp::hashPassword("123456");
    Dialog_Login w;
    w.show();
    return a.exec();
}
