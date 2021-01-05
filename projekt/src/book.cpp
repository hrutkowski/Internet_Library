#pragma once
#include <iostream>
#include "book.hpp"

using namespace std;


Book::Book(string title, string author)
{
    title_ = title ;
    author_ = author;
    taken_ = false;
}

Book::Book(string title, string author, bool taken)
{
    title_ = title ;
    author_ = author;
    taken_ = taken;
}

string Book::title() const
{
    return title_;
}

string Book::author() const
{
    return author_;
}

bool Book::isTaken() const
{
    return taken_;
}

void Book::take()
{
    taken_ = true;
}

void Book::retr()
{
    taken_ = false;
}