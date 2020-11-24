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
    void load_file(BookList &BooksTXT);
    void update_file(BookList &BooksTXT);
};