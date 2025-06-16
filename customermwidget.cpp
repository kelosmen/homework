#include "customermwidget.h"
#include "ui_customermwidget.h"

CustomerMWdiget::CustomerMWdiget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CustomerMWdiget)
{
    ui->setupUi(this);
}

CustomerMWdiget::~CustomerMWdiget()
{
    delete ui;
}
