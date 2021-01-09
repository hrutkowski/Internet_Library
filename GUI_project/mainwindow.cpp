#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButtonLogIn, SIGNAL(clicked(bool)), this, NULL);                  // Do uzupełnienia co robi zamiast NULL
    connect(ui->pushButtonCreateNewAccount, SIGNAL(clicked(bool)), this, NULL);       // Do uzupełnienia co robi zamiast NULL
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onButtonClicked()
{
    // Do uzupełnienia potem
}
