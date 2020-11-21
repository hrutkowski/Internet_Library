#pragma once
#include <iostream>
#include "book.hpp"

using namespace std;

class BookList
{
    Book* firstBook;

    public:
    BookList();
    void search_by_author(string author);
    void search_by_title(string title);
    void reserve_book(string author, string title);
    void add_book(string author, string title, bool taken);
    friend class BookTXT;
    ~BookList()=default;
};