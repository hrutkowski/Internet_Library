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
    void createAdmin(string name, string password, string key);
    void removeAccount(string name, string password);
    void editAccount(string old, string change);
    void displayAccounts();
    void displayCardNumber(string name, string password);
    bool loginAccount(string name, string password);
};

#endif
