#include "registrationwindow.hpp"
#include "ui_registrationwindow.h"

registrationwindow::registrationwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrationwindow)
{
    ui->setupUi(this);

    connect(ui->pushButtonCreateNewAccount, SIGNAL(clicked(bool)), this, SLOT(on_pushButtonCreateNewAccount_clicked()));
}

registrationwindow::registrationwindow(Menu &passedMenu, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrationwindow)
{
    ui->setupUi(this);

    connect(ui->pushButtonCreateNewAccount, SIGNAL(clicked(bool)), this, SLOT(on_pushButtonCreateNewAccount_clicked(passedMenu)));
}

registrationwindow::~registrationwindow()
{
    delete ui;
}

void registrationwindow::on_pushButtonCreateNewAccount_clicked()
{
    ui->label_6->setText(tr("Account not created!"));
}

void registrationwindow::on_pushButtonCreateNewAccount_clicked(Menu &passedMenu)
{

    QString text = ui->textEdit->toPlainText();
    std::string login = text.toStdString();
    text = ui->textEdit_2->toPlainText();
    std::string password = text.toStdString();
    passedMenu.accountList.createAccount(login,password);
    passedMenu.DataBase.saveDataBase(passedMenu.accountList);
    ui->label_6->setText(tr("Account created!"));
}
