#ifndef LIBRARYWINDOW_H
#define LIBRARYWINDOW_H

#include <QDialog>

namespace Ui {
class LibraryWindow;
}

class LibraryWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LibraryWindow(QWidget *parent = nullptr);
    ~LibraryWindow();

private slots:
    void on_pushButtonReserve_clicked();

private:
    Ui::LibraryWindow *ui;
};

#endif // LIBRARYWINDOW_H
