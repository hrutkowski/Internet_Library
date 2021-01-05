#pragma once
#include <cstring>
#include <iostream>
#include <fstream>
#include <sstream>
#include "booklist.cpp"

using namespace std;

class BookTXT
{
    public:
    BookList load(const std::string&);
    void update(const std::string&, BookList &);
};