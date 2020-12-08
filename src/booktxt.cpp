#pragma once
#include <cstring>
#include <iostream>
#include <fstream>
#include <sstream>
#include "booktxt.hpp"
#include "booklist.cpp"

using namespace std;

BookList BookTXT::load(const std::string& file_path)
{
    BookList book_list;
    std::ifstream file(file_path);
    
    string title, author, line;
    bool taken;


    if (file.is_open())
    {
        while (getline(file, line))
        {
            istringstream iss(line);
            if (!(iss >> author >> title >> taken)) { break; }
            Book* ptr = new Book(title, author, taken);
            book_list.add(*ptr);
        }
    }
    return book_list;
}


void BookTXT::update(const std::string& file_path, BookList &books)
{
    std::ofstream file(file_path, fstream::out);
    BookIt iter;

    if (file.is_open())
    {
        for(BookIt iter=books.listGet().begin(); iter != books.listGet().end(); iter++)
        {
            file << (*iter).author() << " " << (*iter).title() << " " << (*iter).isTaken() << endl;
        }
    }    
};

