#include "registrationwindow.h"
#include "ui_registrationwindow.h"

registrationwindow::registrationwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrationwindow)
{
    ui->setupUi(this);

    connect(ui->pushButtonCreateNewAccount, SIGNAL(clicked(bool)), this, SLOT(on_pushButtonCreateNewAccount_clicked()));
}

registrationwindow::~registrationwindow()
{
    delete ui;
}

void registrationwindow::on_pushButtonCreateNewAccount_clicked()
{
    ui->label_6->setText(tr("This is a registration button"));
}
