#pragma once
#include <iostream>
#include "accountlist.cpp"
#include "accountdatabase.cpp"
#include "booklist.cpp"
#include "booktxt.cpp"
#include "messenger.cpp"

using namespace std;

class Menu
{
public:
    void chooseMenu();
    void printLibraryMenu();
    void printAccountMenu(Messenger &mess);
    void switchLibraryMenu(BookList &Books, BookTXT &Booker); //do argumentu tej funkcji przekażemy listę książek, żeby wywoływała operacje na książkach
    void switchAccountMenu(AccountList &List,AccountDataBase &DataBase, Messenger &mess, UserInput &choice);
};