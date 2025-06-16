#ifndef ADMINMWIDGET_H
#define ADMINMWIDGET_H

#include <QWidget>

namespace Ui {
class AdminMWidget;
}

class AdminMWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AdminMWidget(QWidget *parent = nullptr);
    ~AdminMWidget();

private:
    Ui::AdminMWidget *ui;
};

#endif // ADMINMWIDGET_H
