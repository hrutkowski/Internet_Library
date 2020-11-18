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
    void reserve_book(string title, string author);
    void add_book(string title, string author);
    friend class BookTXT;
    ~BookList()=default;
};