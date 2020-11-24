#pragma once 
#include <iostream>
#include <unistd.h>
#include "menu.hpp"

using namespace std;

class BookManager
{

    public:
    void optionA(BookList &books);
    void optionT(BookList &books);
    void optionR(BookList &books, BookTXT &updater);
    void optionE(BookList &books, BookTXT &updater);
    void optionD(BookList &books, BookTXT &updater);
    void optionQ();
    void optionDefault();
};