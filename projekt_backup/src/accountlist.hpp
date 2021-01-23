#pragma once
#include <iostream>
#include <cstring>
#include "account.cpp"

using namespace std;
using AccountItVector = vector<list<Account>::iterator>;
using AccountIt = list<Account>::iterator;

struct AccountList
{
    list<Account> accounts_;

public:
    vector<Account> accountList;
    AccountList();
    void createAccount(string name, string password);
    void removeAccount(string name, string password);
    void editAccount(string old, string change);
    void displayAccounts();
    void displayCardNumber(string name, string password);
};