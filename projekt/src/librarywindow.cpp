#include "librarywindow.hpp"
#include "ui_librarywindow.h"
#include <QMessageBox>


LibraryWindow::LibraryWindow(Menu &passedMenu, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LibraryWindow)
{
    currentMenu=&passedMenu;
    BookIt iter;

    ui->setupUi(this);
    connect(ui->pushButtonReserve, SIGNAL(pressed()), this, SLOT(on_pushButtonReserve_clicked()));
    connect(ui->pushButtonReturn, SIGNAL(pressed()), this, SLOT(on_pushButtonReturn_clicked()));


    for(auto &iter : currentMenu->bookList.listGet())
    {
     QListWidgetItem *ptr = new QListWidgetItem;

     QString temp = QString::fromStdString(iter.title());
     ptr->setText(temp);

     temp = QString::fromStdString(iter.author());
     ptr->setData(Qt::ToolTipRole, temp);

     if (iter.isTaken())
     {
         temp = "Taken";
     }
     else (temp = "Available");
     ptr->setData(Qt::UserRole, temp);
     ui->listWidget->addItem(ptr);
    }



}

LibraryWindow::~LibraryWindow()
{
    delete ui;
}

void LibraryWindow::on_pushButtonReserve_clicked()
{
    BookIt iter;

    QListWidgetItem* currentItem = ui->listWidget->currentItem();

    QVariant status = currentItem->data(Qt::UserRole);
    QVariant author = currentItem->data(Qt::ToolTipRole);
    QVariant title = currentItem->text();

    QString authorsearch = author.toString();
    QString titlesearch = title.toString();

    QString Message = "Author: " + author.toString() + "\nThe book is: " + status.toString();

    QMessageBox messageBox;
    messageBox.setText(Message);
    messageBox.exec();

    if (status.toString() == "Available")
    {
    currentItem->setData(Qt::UserRole, "Taken");
    for(auto &iter : currentMenu->bookList.listGet())
    {
        if (iter.author() == authorsearch.toStdString() && iter.title() == titlesearch.toStdString())
        {
               iter.take();
               currentMenu->uniloader_book.saveDataBase("Library.txt");
        }
    }
    ui->label_2->setText("Succesfully reserved book!");
    }
    else (ui->label_2->setText("Book already reserved!"));
}

void LibraryWindow::on_pushButtonReturn_clicked()
{
    BookIt iter;

    QListWidgetItem* currentItem = ui->listWidget->currentItem();

    QVariant status = currentItem->data(Qt::UserRole);
    QVariant author = currentItem->data(Qt::ToolTipRole);
    QVariant title = currentItem->text();

    QString authorsearch = author.toString();
    QString titlesearch = title.toString();

    QString Message = "Author: " + author.toString() + "\nThe book is: " + status.toString();

    QMessageBox messageBox;
    messageBox.setText(Message);
    messageBox.exec();

    if (status.toString() != "Available")
    {
    currentItem->setData(Qt::UserRole, "Available");
    for(auto &iter : currentMenu->bookList.listGet())
    {
        if (iter.author() == authorsearch.toStdString() && iter.title() == titlesearch.toStdString())
        {
               iter.retr();
               currentMenu->uniloader_book.saveDataBase("Library.txt");
        }
    }
    ui->label_2->setText("Succesfully returned book!");
    }
    else (ui->label_2->setText("Book already available!"));

}


