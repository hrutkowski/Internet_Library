#pragma once
#include <iostream>

using namespace std;

class Book
{

    public:
    string title; //book name
    string author; //book's author
    bool taken; //state
    Book* nextBook;
        Book();  //c-tor
        Book(string title, string author);
        string return_title(string title);
        string return_author(string author);
        bool return_taken(bool taken);
        Book* return_nextBook(Book* nextBook);
        ~Book()=default; //d-tor

};