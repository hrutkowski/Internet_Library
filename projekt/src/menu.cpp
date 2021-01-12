#pragma once
#include <iostream>
#include <unistd.h>
#include "menu.hpp"
#include "userInput.cpp"
#include "accountdatabase.cpp"

using namespace std;

void Menu::chooseMenu()
{
    UserInput choice;
    AccountList accountList;
    BookList Books;
    BookTXT FileWorker;
    AccountDataBase DataBase;

    DataBase.loadDatabase(accountList);
    Books = FileWorker.load("library.txt");
}


