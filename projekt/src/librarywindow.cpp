#include "librarywindow.hpp"
#include "ui_librarywindow.h"
#include <QString>
#include <QFile>

LibraryWindow::LibraryWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LibraryWindow)
{
    ui->setupUi(this);

    connect(ui->pushButtonReserve, SIGNAL(clicked(bool)), this, SLOT(on_pushButtonReserve_clicked()));
}

LibraryWindow::LibraryWindow(Menu &passedMenu, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LibraryWindow)
{
    ui->setupUi(this);
    currentMenu=&passedMenu;

    QFile file("Library.txt");
    file.open(QIODevice::Text | QIODevice::ReadOnly);
    QString text;
    while(!file.atEnd())
        text.append(file.readLine());
    ui->textBrowser->setText(text);
    file.close();

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
