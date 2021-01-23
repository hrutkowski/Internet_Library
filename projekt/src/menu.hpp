#ifndef MENU__HPP
#define MENU__HPP

#include <iostream>
#include "account.hpp"
#include "booklist.hpp"
#include "accountloader.h"
#include "bookloader.h"



using namespace std;

class Menu
{
public:
    Menu();
    AccountList accountList;
    BookList bookList;
    accountloader accloader;
    bookloader bkloader;
};

#endif
