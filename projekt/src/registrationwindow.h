#ifndef REGISTRATIONWINDOW__H
#define REGISTRATIONWINDOW__H

#include <QDialog>

namespace Ui {
class registrationwindow;
}

class registrationwindow : public QDialog
{
    Q_OBJECT

public:
    explicit registrationwindow(QWidget *parent = nullptr);
    ~registrationwindow();

private slots:
    void on_pushButtonCreateNewAccount_clicked();

private:
    Ui::registrationwindow *ui;
};

#endif
