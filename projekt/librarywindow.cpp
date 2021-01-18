#include "librarywindow.h"
#include "ui_librarywindow.h"

LibraryWindow::LibraryWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LibraryWindow)
{
    ui->setupUi(this);
}

LibraryWindow::~LibraryWindow()
{
    delete ui;
}
