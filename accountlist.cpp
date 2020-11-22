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
    newAccount->setName(name);
    newAccount->setPassword(password);
    if (firstAccount == 0)
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
       Account *temp = firstAccount;

    while (temp)
    {
    if (name == temp->getName() && password == temp->getPassword())
        {
            temp->setName("");
            temp->setPassword("");
            temp = temp->nextAccount;
        }
    else
    {
        temp = temp->nextAccount;
    }
    }

};

void AccountList::editAccount(string search)
{
  Account *temp = firstAccount;

    while (temp)
    {
    if (search == temp->getName())
        {
            cout << "Name:" << temp->getName();
            temp = temp->nextAccount;
        }
    else
    {
        temp = temp->nextAccount;
    }
    }
};