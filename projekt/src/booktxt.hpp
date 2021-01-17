#ifndef BOOKTXT__HPP
#define BOOKTXT__HPP

#include <cstring>
#include <iostream>
#include <fstream>
#include <sstream>
#include "booklist.hpp"

using namespace std;

class BookTXT
{
    public:
    BookList load(const std::string&);
    void update(const std::string&, BookList &);
};

#endif
