#ifndef REGISTRATIONWINDOW__H
#define REGISTRATIONWINDOW__H

#include <QDialog>
#include "menu.hpp"
#include "mainwindow.hpp"

namespace Ui {
class registrationwindow;
}

class registrationwindow : public QDialog
{
    Q_OBJECT

public:
    explicit registrationwindow(QWidget *parent = nullptr);
    explicit registrationwindow(Menu &passedMenu, QWidget *parent = nullptr);
    Menu *currentMenu;
    ~registrationwindow();

private slots:
    void on_pushButtonCreateNewAccount_clicked();

private:
    Ui::registrationwindow *ui;
};

#endif
