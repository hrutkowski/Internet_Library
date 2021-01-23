#ifndef MENU__HPP
#define MENU__HPP

#include <iostream>
#include "account.hpp"
#include "accountdatabase.hpp"
#include "booklist.hpp"
#include "booktxt.hpp"
#include "accountloader.h"



using namespace std;

class Menu
{
public:
    Menu();

    AccountList accountList;
    BookList Books;
    accountloader accloader;

    BookTXT FileWorker;
    AccountDataBase DataBase;
};

#endif
