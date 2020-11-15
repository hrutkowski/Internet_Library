#pragma once
#include <iostream>
#include "book.hpp"

using namespace std;

Book::Book()
{
    taken = false;
}

Book::Book(string title, string author)
{
    title = "" ;
    author = "";
}

string Book::return_title(string title)
{
    return title;
}

string Book::return_author(string author)
{
    return author;
}
bool Book::return_taken(bool taken)
{
    return taken;
}

Book* Book::return_nextBook(Book* nextBook)
{
    return nextBook;
}