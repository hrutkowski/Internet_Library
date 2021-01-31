#ifndef ACCOUNTLIST__HPP
#define ACCOUNTLIST__HPP

#include <iostream>
#include <cstring>
#include "account.hpp"

using namespace std;

struct AccountList
{
    vector<Account> accountList;
    AccountList();
    void createAccount(string name, string password);
    void displayCardNumber(string name, string password);
    bool loginAccount(string name, string password);
};

#endif
