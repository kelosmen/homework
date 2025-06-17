#ifndef DIALOG_REGISTER_H
#define DIALOG_REGISTER_H

#include <QDialog>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QMessageBox>
namespace Ui {
class Dialog_register;
}

class Dialog_register : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_register(QWidget *parent = nullptr);
    ~Dialog_register();

private slots:
    void on_pB_cancel_clicked();

    void on_pB_confirm_clicked();

private:
    Ui::Dialog_register *ui;
};

#endif // DIALOG_REGISTER_H
