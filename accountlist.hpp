#pragma once
#include <iostream>
#include <cstring>
#include "account.cpp"

using namespace std;

struct AccountList
{
    Account *firstAccount;
    AccountList();
    void createAccount(string name, string password);
    void removeAccount(string name, string password);
    void editAccount(string search);
    void displayCardNumber(string name, string password);
};