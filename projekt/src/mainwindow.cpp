#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButtonLogIn, SIGNAL(clicked(bool)), this, SLOT(onButtonClicked()));                  // Do zmiany
    connect(ui->pushButtonCreateNewAccount, SIGNAL(clicked(bool)), this, SLOT(onButtonClicked()));       // Do zmiany
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onButtonClicked()
{
    ui->label_6->setText(tr("It is working"));   //Do zmiany
}
