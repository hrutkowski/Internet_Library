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

bool BookList::find(string author, string title)
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

/*
BookList::BookList()
{
    firstBook = 0;
}

void BookList::search_by_author(string author)
{
    Book *temp = firstBook;
    Messenger mess;
    bool success=false;

    while (temp)
    {
        if (author == temp->get_author())
        {
            success=true;
            cout <<  temp->get_author() << " - " << "\"" << temp->get_title() << "\"";
            if(temp->get_taken()==true) mess.showText(" - TAKEN");
            else mess.showText(" - AVAILABLE");
            temp = temp->get_nextBook();  
        }
        else temp = temp->get_nextBook();
    }
    if(success==false) mess.showText("Sorry, unknown author!");
}

void BookList::search_by_title(string title)
{
    Book *temp = firstBook;
    Messenger mess;
    bool success;
    
    while (temp)
    {
        if (title == temp->get_title())
        {
            success=true;
            cout <<  temp->get_author() << " - " << "\"" << temp->get_title() << "\"";
            if(temp->get_taken()==true) mess.showText(" - TAKEN");
            else mess.showText(" - AVAILABLE");
            temp = temp->get_nextBook();   
        }
        else temp = temp->get_nextBook();
    }
    if(success==false) mess.showText("Sorry, unknown title!");
}

void BookList::reserve_book(string author, string title)
{
    Book *temp = firstBook;
    Messenger mess;
    bool success, taken;

    while (temp)
    {
        if (title == temp->get_title() && author == temp->get_author())
        {
            if(temp->get_taken()==0)
            {
                success=true;
                temp->set_taken(1);
                mess.showText("Book reserved successfully!");
                temp = temp->get_nextBook();
            }
            else 
            {
                taken=true;
                break;
            }
        }
        else temp = temp->get_nextBook();
    }
    if(taken==true) mess.showText("Book is not available. We are so sorry!");
    else if(success==false) mess.showText("Sorry, something gone wrong. Try again!");
}

void BookList::return_book(string author, string title)
{
    Book *temp = firstBook;
    Messenger mess;
    bool success, available;

    while (temp)
    {
        if (title == temp->get_title() && author == temp->get_author())
        {
            if(temp->get_taken() == 1)
            {
            success=true;
            temp->set_taken(0);
            temp = temp->get_nextBook();
            mess.showText("Book returned!");
            }
            else 
            {
                available=true;
                break;
            }
        }
        else temp = temp->get_nextBook();
    }
    if(available==true) mess.showText("Book was not taken!");
    else if(success==false) mess.showText("Sorry, something gone wrong. Try again!");
}

void BookList::add_book(string author, string title, bool taken)
{
    Book *newBook = new Book;
    Messenger mess;
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

        while (temp->get_nextBook())
        {
            temp = temp->get_nextBook();
        }

        temp->set_nextBook(newBook);
        newBook->set_nextBook(0);
    }
}

auto BookList::get_firstBook()
{
    return firstBook;
}
*/