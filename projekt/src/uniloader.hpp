#ifndef UNILOADER_H
#define UNILOADER_H

#include "loader.hpp"
#include "booklist.hpp"
#include "accountlist.hpp"

class UniLoader
{
public:
    UniLoader();
    UniLoader(UniLoader &uniLoader);
    UniLoader(LoaderPTR loader);
    void loadDataBase(std::string filepath);
    void saveDataBase(std::string filepath);
    void changeBookList(BookList &bookList);
    void changeAccountList(AccountList &accountList);
    LoaderPTR loader_;
};

#endif // UNILOADER_H
