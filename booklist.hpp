#pragma once
#include <iostream>
#include <list>
#include "book.hpp"

using namespace std;

class BookList
{
    list<Book> books_;

public:
    BookList() = default;
    vector<list<Book>::iterator> searchAuthor(string);
    vector<list<Book>::iterator> searchTitle(string);
    void reserve(list<Book>::iterator);
    bool find(string, string);
    void ret(list<Book>::iterator);
    void add(const Book&);
};