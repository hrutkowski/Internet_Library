#pragma once
#include <iostream>
#include <cstring>
#include "accountlist.hpp"
#include "account.cpp"

using namespace std;

AccountList::AccountList()
{
    firstAccount = 0;
}

void AccountList::createAccount(string name, string password)
{
    Account *newAccount = new Account;
    if (firstAccount== 0)
    {
        firstAccount = newAccount;
    }
    else 
    {
        Account *temp = firstAccount;

        while (temp->nextAccount)
        {
            temp = temp->nextAccount;

        }

        temp->nextAccount = newAccount;
        newAccount->nextAccount = 0;
    }
    delete newAccount;
};

void AccountList::removeAccount(string name, string password)
{

};

void AccountList::editAccount(string search)
{

};