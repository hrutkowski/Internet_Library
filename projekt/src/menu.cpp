#include <iostream>
#include <unistd.h>
#include <memory>
#include "menu.hpp"



using namespace std;

Menu::Menu()
{
    uniloader_book = UniLoader(std::make_shared<BookLoader>());
    uniloader_book.changeBookList(bookList);
    try
    {
        uniloader_book.loadDataBase("Library.txt");
    }
    catch (invalid_argument &e)
    {
        QMessageBox messageBox;
        messageBox.setText(e.what());
        messageBox.exec();
        exit(0);
    };
    uniloader_account = UniLoader(std::make_shared<AccountLoader>());
    uniloader_account.changeAccountList(accountList);
    try
    {
        uniloader_account.loadDataBase("AccountDataBase.txt");
    }
    catch (invalid_argument &e)
    {
        QMessageBox messageBox;
        messageBox.setText(e.what());
        messageBox.exec();
        exit(0);
    };
};

