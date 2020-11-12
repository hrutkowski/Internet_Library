#pragma once
#include <iostream>
#include "book.hpp"

using namespace std;

Book::Book()
{
    taken = false;
}

Book::Book(string b_title, string b_author, bool b_taken)
{
    title = b_title;
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
        cout << "This book was not reserved!" << endl;
    } 
}

void Book::book_status()
{
    if(taken) cout << "This book is taken!" << endl;
    else cout<<"THis book is available for reservation!" << endl;
}

                 //SMALL TEST OF THE FUNCTIONS
int main(void)
{
    Book book1;

    book1.reservation();
    cout << "COMMIT: Information about reservation" << endl;
    cout << "=============================" << endl;
    book1.book_status();
    cout << "COMMIT: Should be reserved" << endl;
    cout << "=============================" << endl;
    book1.reservation();
    cout << "COMMIT: Should not be able to reserve" << endl;
    cout << "=============================" << endl;
    book1.cancel_reservation();
    cout << "COMMIT: Informtion about the cancel of reservation" << endl;
    cout << "=============================" << endl;
    book1.book_status();
    cout << "COMMIT: Should be able to be reserved" << endl;
}

