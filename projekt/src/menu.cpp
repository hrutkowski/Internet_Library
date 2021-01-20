#include <iostream>
#include <unistd.h>
#include "menu.hpp"



using namespace std;

Menu::Menu()
{
    DataBase.loadDatabase(accountList);
    Books = FileWorker.load("library.txt");
};

Menu::Menu(Menu &passedMenu)
{
    accountList = passedMenu.accountList;
    Books = passedMenu.Books;
    FileWorker = passedMenu.FileWorker;
    DataBase.loadDatabase(accountList);
    Books = FileWorker.load("library.txt");
}



