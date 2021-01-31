#include "librarywindow.hpp"
#include "ui_librarywindow.h"


LibraryWindow::LibraryWindow(Menu &passedMenu, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LibraryWindow)
{
    currentMenu=&passedMenu;
    BookIt iter;

    ui->setupUi(this);
    connect(ui->pushButtonReserve, SIGNAL(clicked(bool)), this, SLOT(on_pushButtonReserve_clicked()));

    for(auto &iter : currentMenu->bookList.listGet())
    {
     QString temp = QString::fromStdString(iter.title());
     ui->listWidget->addItem(temp);
    }


}

LibraryWindow::~LibraryWindow()
{
    delete ui;
}

void LibraryWindow::on_pushButtonReserve_clicked()
{
    ui->label_2->setText(tr("Book successfully reserved!"));
}


