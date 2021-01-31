#ifndef BOOKLOADER_H
#define BOOKLOADER_H

#include "uniloader.h"
#include "loader.hpp"
#include "booklist.hpp"

class bookloader : public loader
{
public:
    void changeBookList(BookList &bookList) override;
     void changeAccountList(AccountList &accountList) override;
    void saveDataBase(std::string filepath) override;
    void loadDataBase(std::string filepath) override;

};

#endif // BOOKLOADER_H
