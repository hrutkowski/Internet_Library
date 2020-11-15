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
    void setName(string name);
    void setPassword(string password);
private:
    string name;
    string password;
    string cardNumber;
};