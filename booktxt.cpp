#pragma once
#include <cstring>
#include <iostream>
#include <fstream>
#include <sstream>
#include "booktxt.hpp"
#include "booklist.cpp"

using namespace std;

void BookTXT::load_file(BookList &BooksTXT)
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

void BookTXT::update_file(BookList &BooksTXT)
{
    outFile.open("library.txt", fstream::out);
    
    if (outFile.is_open())
    {
        Book* temp = BooksTXT.firstBook;

        while (temp)
        {
            outFile << temp->get_author() << " " << temp->get_title() 
            << " " << temp->get_taken() << endl;
            temp = temp->get_nextBook();
        }
    }
    outFile.close();
};