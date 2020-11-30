#pragma once
#include <iostream>
#include "booklist.hpp"
#include "book.cpp"
#include "messenger.cpp"

using namespace std;

void BookList::add(const Book& book)
{
    books_.push_back(book);
}

vector<list<Book>::iterator> BookList::searchAuthor(string author)
{
    vector<list<Book>::iterator> ptrbooks;
    for(list<Book>::iterator iter=books_.begin(); iter != books_.end(); iter++)
    {
        if(author == (*iter).author())
        {
            ptrbooks.push_back(iter);
        }
    }
    return ptrbooks;
}

vector<list<Book>::iterator> BookList::searchTitle(string title)
{
    vector<list<Book>::iterator> ptrbooks;
    for(list<Book>::iterator iter=books_.begin(); iter != books_.end(); iter++)
    {
        if(title == (*iter).title())
        {
            ptrbooks.push_back(iter);
        }
    }
    return ptrbooks;
}

void BookList::reserve(list<Book>::iterator iter)
{
    (*iter).take();
}

bool BookList::findReserve(string author, string title)
{
    for(list<Book>::iterator iter=books_.begin(); iter != books_.end(); iter++)
    {
        if((title == (*iter).title()) && (author == (*iter).author()) && ((*iter).isTaken()==false))
        {
            reserve(iter);
            return true;
        }
    }
    return false;
}

void BookList::ret(list<Book>::iterator iter)
{
    (*iter).retr();
}

bool BookList::findReturn(string author, string title)
{
    for(list<Book>::iterator iter=books_.begin(); iter != books_.end(); iter++)
    {
        if((title == (*iter).title()) && (author == (*iter).author()) && ((*iter).isTaken()==true))
        {
            ret(iter);
            return true;
        }
    }
    return false;
}

list<Book>& BookList::listGet()
{
    return books_;
}