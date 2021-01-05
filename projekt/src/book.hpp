#pragma once
#include <iostream>

using namespace std;

class Book
{
    string title_; //book name
    string author_; //book's author
    bool taken_; //state
    
public:
    Book(string title, string author);
    Book(string title, string author, bool taken);
    std::string title() const;
    std::string author() const; 
    bool isTaken() const; 
    void take();
    void retr();

};