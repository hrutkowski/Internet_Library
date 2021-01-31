#include <iostream>
#include "booklist.hpp"


using namespace std;

void BookList::add(const Book& book)
{
    books_.push_back(book);
}

BookItVector BookList::searchAuthor(string author)
{
    BookItVector ptrbooks;
    for(BookIt iter=books_.begin(); iter != books_.end(); iter++)
    {
        if(author == (*iter).author())
        {
            ptrbooks.push_back(iter);
        }
    }
    return ptrbooks;
}

BookItVector BookList::searchTitle(string title)
{
    BookItVector ptrbooks;
    for(BookIt iter=books_.begin(); iter != books_.end(); iter++)
    {
        if(title == (*iter).title())
        {
            ptrbooks.push_back(iter);
        }
    }
    return ptrbooks;
}

void BookList::reserve(BookIt iter)
{
    (*iter).take();
}



bool BookList::findReserve(string author, string title)
{
    for(BookIt iter=books_.begin(); iter != books_.end(); iter++)
    {
        if((title == (*iter).title()) && (author == (*iter).author()) && ((*iter).isTaken()==false))
        {
            reserve(iter);
            return true;
        }
    }
    return false;
}

void BookList::ret(BookIt iter)
{
    (*iter).retr();
}

bool BookList::findReturn(string author, string title)
{
    for(BookIt iter=books_.begin(); iter != books_.end(); iter++)
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
