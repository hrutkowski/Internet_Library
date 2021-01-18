#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include "registrationwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButtonLogIn, SIGNAL(clicked(bool)), this, SLOT(loginButtonClicked()));                  // Do zmiany
    connect(ui->pushButtonCreateNewAccount, SIGNAL(clicked(bool)), this, SLOT(registerButtonClicked()));       // Do zmiany

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loginButtonClicked()
{
    ui->label_6->setText(tr("this is the login button"));
    mainMenu.accountList.displayAccounts();
}

void MainWindow::registerButtonClicked()
{
    registrationwindow registrationWindow(mainMenu);
    registrationWindow.setModal(true);
    registrationWindow.exec();
}
