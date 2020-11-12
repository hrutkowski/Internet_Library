#pragma once
#include <iostream>

using namespace std;

class Book
{
    string name; //book name
    string author; //book's author
    bool taken; //state
    
    public:
        Book();  //c-tor
        Book(string b_name, string b_author, bool b_taken); // overloaded c-tor
        ~Book()=default; //d-tor
};