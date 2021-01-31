#include "registrationwindow.hpp"
#include "ui_registrationwindow.h"

registrationwindow::registrationwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrationwindow)
{
    ui->setupUi(this);

    connect(ui->pushButtonCreateNewAccount, SIGNAL(pressed()), this, SLOT(on_pushButtonCreateNewAccount_clicked()));
}

registrationwindow::registrationwindow(Menu &passedMenu, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrationwindow)
{
    ui->setupUi(this);
    currentMenu = &passedMenu;

    connect(ui->pushButtonCreateNewAccount, SIGNAL(pressed()), this, SLOT(on_pushButtonCreateNewAccount_clicked()));
}

registrationwindow::~registrationwindow()
{
    delete ui;
}

void registrationwindow::on_pushButtonCreateNewAccount_clicked()
{
    QString text = ui->textEdit->toPlainText();
    std::string login = text.toStdString();
    text = ui->textEdit_2->toPlainText();
    std::string password = text.toStdString();
    currentMenu->accountList.createAccount(login,password);
    ui->label_6->setText(tr("Account created!"));
    currentMenu->uniloader_account.saveDataBase("AccountDataBase.txt");
}


