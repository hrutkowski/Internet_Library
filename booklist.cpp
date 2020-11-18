#pragma once
#include <iostream>
#include "booklist.hpp"
#include "book.cpp"

using namespace std;

BookList::BookList()
{
    firstBook = 0;
}

void BookList::search_by_author(string author)
{

}

void BookList::search_by_title(string title)
{

}

void BookList::reserve_book(string title, string author)
{

}

void BookList::add_book(string title, string author)
{
    Book *newBook = new Book;
    newBook->title = title;
    newBook->author = author;
    if (firstBook == 0)
    {
        firstBook = newBook;
    }
    else 
    {
        Book *temp = firstBook;

        while (temp->nextBook)
        {
            temp = temp->nextBook;
        }

        temp->nextBook = newBook;
        newBook->nextBook = 0;
    }
}