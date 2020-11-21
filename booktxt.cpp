#pragma once
#include <cstring>
#include <iostream>
#include <fstream>
#include <sstream>
#include "booktxt.hpp"
#include "booklist.cpp"

using namespace std;

void BookTXT::loadFile(BookList &BooksTXT)
{
    inFile.open("library.txt");
    
    string title, author, line;
    bool taken;

    if (inFile.is_open())
    {
        while (getline(inFile, line))
        {
            istringstream iss(line);
            if (!(iss >> author >> title >> taken)) { break; }
            BooksTXT.add_book(author, title, taken);
        }
    }

    inFile.close();
};