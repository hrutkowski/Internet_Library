#pragma once
#include <iostream>
#include "book.hpp"

using namespace std;

Book::Book()
{
    taken = false;
}

Book::Book(string b_name, string b_author, bool b_taken)
{
    name = b_name;
    author = b_author;
    taken = b_taken;
}

void Book::reservation()
{
    if(taken)
    {
        cout << endl << "This book is already taken. We are so sorry!" << endl;
    }
    else 
    {
       taken = true;
       cout << endl << "You have successfully reserved a book!" << endl;
    }
}

void Book::cancel_reservation()
{
    if(taken)
    {
        taken = false;
        cout << endl << "You have successfully canceled reservation!" << endl;
    }
    else
    {
        cout << "This book was not reserved!";
    } 
}

void Book::book_status()
{
    if(taken) cout << "This book is taken!";
    else cout<<"THis book is available for reservation!";
}

