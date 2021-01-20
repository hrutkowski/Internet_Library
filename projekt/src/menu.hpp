#ifndef MENU__HPP
#define MENU__HPP

#include <iostream>
#include "account.hpp"
#include "accountdatabase.hpp"
#include "booklist.hpp"
#include "booktxt.hpp"

using namespace std;

class Menu
{
public:
    Menu();
    Menu(Menu &passedMenu);
    AccountList accountList;
    BookList Books;
    BookTXT FileWorker;
    AccountDataBase DataBase;
};

#endif
