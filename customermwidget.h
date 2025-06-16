#ifndef CUSTOMERMWIDGET_H
#define CUSTOMERMWIDGET_H

#include <QWidget>

namespace Ui {
class CustomerMWdiget;
}

class CustomerMWdiget : public QWidget
{
    Q_OBJECT

public:
    explicit CustomerMWdiget(QWidget *parent = nullptr);
    ~CustomerMWdiget();

private:
    Ui::CustomerMWdiget *ui;
};

#endif // CUSTOMERMWIDGET_H
