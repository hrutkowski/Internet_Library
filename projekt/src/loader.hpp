#ifndef LOADER_HPP
#define LOADER_HPP

#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>
#include <memory>
#include "accountlist.hpp"
#include "booklist.hpp"

class loader
{
public:
    virtual void loadDataBase(std::string filepath) = 0;
    virtual void saveDataBase(std::string filepath) = 0;
    virtual void changeAccountList(AccountList &accountList) = 0;
    virtual void changeBookList(BookList &bookList) = 0;
    AccountList *AccList;
    BookList *BkList;
    virtual ~loader() {};
};

using LoaderPTR = std::shared_ptr<loader>;

#endif // LOADER_HPP
