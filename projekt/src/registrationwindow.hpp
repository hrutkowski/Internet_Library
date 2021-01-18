#ifndef REGISTRATIONWINDOW__H
#define REGISTRATIONWINDOW__H

#include <QDialog>
#include "menu.hpp"

namespace Ui {
class registrationwindow;
}

class registrationwindow : public QDialog
{
    Q_OBJECT

public:
    explicit registrationwindow(QWidget *parent = nullptr);
    explicit registrationwindow(Menu &passedMenu, QWidget *parent = nullptr);
    ~registrationwindow();

private slots:
    void on_pushButtonCreateNewAccount_clicked();
    void on_pushButtonCreateNewAccount_clicked(Menu &passedMenu);

private:
    Ui::registrationwindow *ui;
};

#endif
