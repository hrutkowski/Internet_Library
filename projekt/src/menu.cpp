#pragma once
#include <iostream>
#include <unistd.h>
#include "menu.hpp"
#include "accountdatabase.cpp"

using namespace std;

Menu::Menu()
{
    AccountList accountList;
    BookList Books;
    BookTXT FileWorker;
    AccountDataBase DataBase;
    DataBase.loadDatabase(accountList);
    Books = FileWorker.load("library.txt");
}


