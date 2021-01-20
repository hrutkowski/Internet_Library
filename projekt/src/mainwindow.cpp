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
    mainMenu.DataBase.loadDatabase(mainMenu.accountList);
    mainMenu.accountList.displayAccounts();
    QString text = ui->textEdit->toPlainText();
    std::string login = text.toStdString();
    text = ui->textEdit_2->toPlainText();
    std::string password = text.toStdString();
    if (mainMenu.accountList.loginAccount(login, password))
    {
    LibraryWindow libraryWindow;
    libraryWindow.setModal(true);
    libraryWindow.exec();

    }
    else ui->label_6->setText(tr("Login failed!"));
}

void MainWindow::registerButtonClicked()
{
    registrationwindow registrationWindow(mainMenu);
    registrationWindow.setModal(true);
    registrationWindow.exec();

}
