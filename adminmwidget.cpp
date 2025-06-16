#include "adminmwidget.h"
#include "ui_adminmwidget.h"

AdminMWidget::AdminMWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AdminMWidget)
{
    ui->setupUi(this);
}

AdminMWidget::~AdminMWidget()
{
    delete ui;
}
