#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class Account
{
public:
    Account();
private:
    string name;
    string password;
    string cardNumber;
};