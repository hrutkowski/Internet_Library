#pragma once
#include <cstring>
#include <iostream>
#include <fstream>
#include <sstream>
#include "booktxt.hpp"
#include "booklist.cpp"

using namespace std;

void BookTXT::load_file(BookList &BooksTXT, const string& file_path)
{
    BookList book_list;
    ifstream file(file_path);
    
    string title, author, line;
    bool taken;

    if (file.is_open())
    {
        while (getline(file, line))
        {
            istringstream iss(line);
            if (!(iss >> author >> title >> taken)) { break; }
            BooksTXT.add_book(author, title, taken);
        }
    }
};

void BookTXT::update_file(BookList &BooksTXT, const string& file_path)
{
    std::ofstream file(file_path, fstream::out);
    
    if (file.is_open())
    {
        Book* temp = BooksTXT.get_firstBook();

        while (temp)
        {
            file << temp->get_author() << " " << temp->get_title() 
            << " " << temp->get_taken() << endl;
            temp = temp->get_nextBook();
        }
    }
};