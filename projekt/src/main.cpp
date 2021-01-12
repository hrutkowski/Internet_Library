#include <iostream>
#include "menu.cpp"
#include "mainwindow.h"

#include <QApplication>

using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    Menu mainMenu;
    mainMenu.chooseMenu();
    return a.exec();
}

