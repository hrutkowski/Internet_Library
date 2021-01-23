#ifndef BOOKLOADER_H
#define BOOKLOADER_H

#include "loader.hpp"
#include "booklist.hpp"

class bookloader : public loader
{
public:
    bookloader();
    void changeList(BookList &bookList);
    void saveDataBase(std::string filepath) override;
    void loadDataBase(std::string filepath) override;
    BookList *BkList;
};

#endif // BOOKLOADER_H
