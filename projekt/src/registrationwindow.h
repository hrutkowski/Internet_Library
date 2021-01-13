#ifndef REGISTRATIONWINDOW_H
#define REGISTRATIONWINDOW_H

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

private:
    Ui::registrationwindow *ui;
};

#endif // REGISTRATIONWINDOW_H
