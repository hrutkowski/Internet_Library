#pragma once
#include <iostream>
#include <list>
#include "book.hpp"

using namespace std;

class BookList
{
    std::list<Book> books_;

public:
    BookList() = default;
    vector<list<Book>::iterator> searchAuthor(string author);
    vector<list<Book>::iterator> searchTitle(string title);
    void reserv();
    void ret();
    void add(const Book&);
};