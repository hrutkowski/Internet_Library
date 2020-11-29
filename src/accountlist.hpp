#pragma once
#include <iostream>
#include <cstring>
#include "account.cpp"

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
};