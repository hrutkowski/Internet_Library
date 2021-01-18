#include "librarywindow.hpp"
#include "ui_librarywindow.h"

LibraryWindow::LibraryWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LibraryWindow)
{
    ui->setupUi(this);

    connect(ui->pushButtonReserve, SIGNAL(clicked(bool)), this, SLOT(on_pushButtonReserve_clicked()));
}

LibraryWindow::~LibraryWindow()
{
    delete ui;
}

void LibraryWindow::on_pushButtonReserve_clicked()
{
    ui->label_2->setText(tr("Book successfully reserved!"));
}
