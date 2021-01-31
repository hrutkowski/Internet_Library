#include <iostream>
#include <unistd.h>
#include <memory>
#include "menu.hpp"



using namespace std;

Menu::Menu()
{
    UniLoader uniloader_book = UniLoader(std::make_shared<bookloader>());
    uniloader_book.changeBookList(bookList);
    uniloader_book.loadDataBase("library.txt");
    UniLoader uniloader_account = UniLoader(std::make_shared<accountloader>());
    uniloader_account.changeAccountList(accountList);
    uniloader_account.loadDataBase("AccountDataBase.txt");
};

