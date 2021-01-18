#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include "registrationwindow.hpp"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButtonLogIn, SIGNAL(clicked(bool)), this, SLOT(loginButtonClicked()));
    connect(ui->pushButtonCreateNewAccount, SIGNAL(clicked(bool)), this, SLOT(registerButtonClicked()));

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loginButtonClicked()
{
    mainMenu.accountList.displayAccounts();

    this->hide();
    LibraryWindow libraryWindow;
    libraryWindow.setModal(true);
    libraryWindow.exec();
}

void MainWindow::registerButtonClicked()
{
    registrationwindow registrationWindow(mainMenu);
    registrationWindow.setModal(true);
    registrationWindow.exec();
}
