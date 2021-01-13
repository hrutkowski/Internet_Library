#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::registerButtonClicked()
{
    ui->label_6->setText(tr("this is the register button"));   //Do zmiany
}

void MainWindow::loginButtonClicked()
{
    ui->label_6->setText(tr("this is the login button"));   //Do zmiany
}
