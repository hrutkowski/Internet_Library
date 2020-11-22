#pragma once
#include <iostream>

using namespace std;

class Book
{
    string title; //book name
    string author; //book's author
    bool taken; //state
    Book* nextBook;
    
    public:
    Book();  //c-tor
    Book(string title, string author);
    auto get_title();
    auto set_title(string given_title);
    auto get_author(); 
    auto set_author(string given_author);
    auto get_taken(); 
    auto set_taken(bool given_taken);
    auto get_nextBook();
    auto set_nextBook(Book* given_nextBook);
    ~Book()=default; //d-tor

};