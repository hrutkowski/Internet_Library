#ifndef MAINWINDOW__HPP
#define MAINWINDOW__HPP

#include <QMainWindow>
#include "menu.hpp"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void registerButtonClicked();
    void loginButtonClicked();

private slots:


private:
    Ui::MainWindow *ui;

};

#endif

