#ifndef LIBRARYWINDOW_H
#define LIBRARYWINDOW_H

#include <QDialog>
#include "menu.hpp"

namespace Ui {
class LibraryWindow;
}

class LibraryWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LibraryWindow(QWidget *parent = nullptr);
    explicit LibraryWindow(Menu &passedMenu, QWidget *parent = nullptr);
    Menu *currentMenu;
    ~LibraryWindow();

private slots:
    void on_pushButtonReserve_clicked();
    void on_pushButtonReturn_clicked();

private:
    Ui::LibraryWindow *ui;
};

#endif // LIBRARYWINDOW_H
