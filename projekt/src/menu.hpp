#ifndef MENU__HPP
#define MENU__HPP

#include <iostream>
#include "account.hpp"
#include "booklist.hpp"
#include "uniloader.h"
#include "bookloader.hpp"
#include "accountloader.hpp"



using namespace std;

class Menu
{
public:
    Menu();
    AccountList accountList;
    BookList bookList;
    UniLoader uniloader_book;
    UniLoader uniloader_account;
};

#endif
