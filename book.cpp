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

auto Book::get_title() 
{
    return title;
}

auto Book::set_title(string given_title)
{
    title = given_title;
}

auto Book::get_author()
{
    return author;
}

auto Book::set_author(string given_author)
{
    author = given_author;
}

auto Book::get_taken()
{
    return taken;
}

auto Book::set_taken(bool given_taken)
{
    taken = given_taken;
}

auto Book::get_nextBook() 
{
    return nextBook;
}
auto Book::set_nextBook(Book* given_nextBook)
{
    nextBook = given_nextBook;
}