#pragma once
#include <iostream>

using namespace std;

class Book
{
    string title; //book name
    string author; //book's author
    bool taken; //state
    
public:
    Book(string title, string author);
    std::string title() const;
    std::string author() const; 
    bool isTaken(); 
    void take();

    void set_taken(bool given_taken);


};