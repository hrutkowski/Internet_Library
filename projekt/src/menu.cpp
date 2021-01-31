#include <iostream>
#include <unistd.h>
#include <memory>
#include "menu.hpp"



using namespace std;

Menu::Menu()
{
    uniloader_book = UniLoader(std::make_shared<BookLoader>());
    uniloader_book.changeBookList(bookList);
    uniloader_book.loadDataBase("Library.txt");
    uniloader_account = UniLoader(std::make_shared<AccountLoader>());
    uniloader_account.changeAccountList(accountList);
    uniloader_account.loadDataBase("AccountDataBase.txt");
};

