#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class Account
{
public:
    Account();
    Account(string name, string password);
    Account *nextAccount;
    string name;
    string password;
    string cardNumber;
};