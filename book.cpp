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

