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
    void loadFile(BookList &BooksTXT);
    ifstream inFile;
};