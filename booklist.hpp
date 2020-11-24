#pragma once
#include <iostream>
#include <list>
#include "book.hpp"

using namespace std;

class BookIt
{
    using iterator_type = std::list<Book>::const_iterator;
    iterator_type iterator_;
public:
    BookIt(const iterator_type& it) : iterator_(it) {}

    iterator_type operator->() {return iterator_;}
    const Book & operator*() {return *iterator_;}
};

class BookList
{
    std::list<Book> books_;

public:
    BookList() = default;
    BookIt search_by_author(string author);
    BookIt search_by_title(string title);
    void reserv(BookIt);
    void ret(BookIt);
    void add(const Book&);
    auto begin() {return books_.begin();}
};