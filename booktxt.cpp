#pragma once
#include <cstring>
#include <iostream>
#include <fstream>
#include <sstream>
#include "booktxt.hpp"
#include "booklist.cpp"

using namespace std;

/*
BookList BookTXT::load_file(const std::string& file_path)
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
            book_list.add(Book(author, title));
        }
    }
};

void BookTXT::update_file(const std::string& file_path, const BookList &BooksTXT)
{
    std::ofstream file(file_path, fstream::out);
    
    if (file.is_open())
    {
        for(auto & book : BooksTXT)
        {
            file << book << std::endl;
        }
    }
};
*/