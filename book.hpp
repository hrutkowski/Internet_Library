#pragma once
#include <iostream>

using namespace std;

class Book
{
    string title; //book name
    string author; //book's author
    bool taken; //state
    
    public:
        Book();  //c-tor
        Book(string b_title, string b_author, bool b_taken); // overloaded c-tor
        void reservation();
        void cancel_reservation();
        void book_status();
        ~Book()=default; //d-tor

};