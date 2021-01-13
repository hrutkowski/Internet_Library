#include "registrationwindow.h"
#include "ui_registrationwindow.h"

registrationwindow::registrationwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrationwindow)
{
    ui->setupUi(this);
}

registrationwindow::~registrationwindow()
{
    delete ui;
}
