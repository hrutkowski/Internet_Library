#ifndef BOOKLIST__HPP
#define BOOKLIST__HPP

#include <iostream>
#include <list>
#include <vector>
#include "book.hpp"

using namespace std;
using BookItVector = vector<list<Book>::iterator>;
using BookIt = list<Book>::iterator;

class BookList
{
    list<Book> books_;

public:
    BookList() = default;
    BookItVector searchAuthor(string);
    BookItVector searchTitle(string);
    void displayBooks();
    void reserve(BookIt);
    bool findReserve(string, string);
    void ret(BookIt);
    bool findReturn(string, string);
    void add(const Book&);
    list<Book>& listGet();
};

#endif
