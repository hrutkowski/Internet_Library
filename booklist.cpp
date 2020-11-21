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
    Book *temp = firstBook;

    while (temp)
    {
        if (author == temp->get_author())
        {
            cout <<  temp->get_author() << " - " << "\"" << temp->get_title() << "\"";
            if(temp->get_taken()==true) cout << " - TAKEN" << endl;
            else cout << " - AVAILABLE" << endl;
            temp = temp->get_nextBook();   
        }
        else temp = temp->get_nextBook();
    }
}

void BookList::search_by_title(string title)
{
    Book *temp = firstBook;
    
    while (temp)
    {
        if (title == temp->get_title())
        {
            cout <<  temp->get_author() << " - " << "\"" << temp->get_title() << "\"";
            if(temp->get_taken()==true) cout << " - TAKEN" << endl;
            else cout << " - AVAILABLE" << endl;
            temp = temp->get_nextBook();   
        }
        else temp = temp->get_nextBook();
    }
}

void BookList::reserve_book(string author, string title)
{
    Book *temp = firstBook;

    while (temp)
    {
        if (title == temp->get_title())
        {
            temp->set_taken(1);
            temp = temp->get_nextBook();
        }
        else temp = temp->get_nextBook();
    }
}

void BookList::add_book(string author, string title, bool taken)
{
    Book *newBook = new Book;
    newBook->set_title(title);
    newBook->set_author(author);
    newBook->set_taken(taken);
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