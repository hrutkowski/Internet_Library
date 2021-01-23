#include <iostream>
#include <unistd.h>
#include "menu.hpp"



using namespace std;

Menu::Menu()
{
    accloader.changeList(accountList);
    bkloader.changeList(bookList);
    accloader.loadDataBase("AccountDataBase.txt");
    bkloader.loadDataBase("library.txt");
};

