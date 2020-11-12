#pragma once
#include <iostream>

using namespace std;

class Book
{
    string name;
    string author;
    bool taken;
    
    public:
        Book();
        ~Book()=default;
};