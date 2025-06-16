#include "dialog_login.h"

#include <QApplication>
#include <QRadioButton>
#include <QPushButton>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog_Login w;
    w.show();
    return a.exec();
}
