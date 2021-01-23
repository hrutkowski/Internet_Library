#include "loader.hpp"

loader::loader()
{

}

loader::loader(class BookList &bookList, AccountList &accountList)
{
    AccList = &accountList;
    BkList = &bookList;
}
