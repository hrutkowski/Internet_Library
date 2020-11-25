#pragma once
#include <iostream>
#include <cstring>
#include "accountlist.hpp"
#include "account.cpp"

using namespace std;

AccountList::AccountList()
{
    firstAccount=0;
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
};

void AccountList::removeAccount(string name, string password) //todo fix and add pointer delete
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
    };
};

void AccountList::editAccount(string old, string change)
{
  Account *temp = firstAccount;

    while (temp)
    {
    if (old == temp->getName())
        {
            temp->setName(change);
            temp = temp->nextAccount;
        }
    else if (old == temp->getPassword())
    {
        temp->setPassword(change);
        temp = temp->nextAccount;
    }
    else
    {
        temp = temp->nextAccount;
    }
    }
};

void AccountList::displayCardNumber(string name, string password)
{
  Account *temp = firstAccount;
  vector<int> cardno;

    while (temp)
    {
    if (name == temp->getName() && password == temp->getPassword())
        {
            cardno = temp->getCardNo();
            for (int i=0; i<10; i++)
            {
                cout << cardno[i];
                if (i==9) cout << endl;
            };
            temp = temp->nextAccount;
        }
    else
    {
        temp = temp->nextAccount;
    }
    }
};

bool AccountList::findAccount(string search)
{
  Account *temp = firstAccount;

    while (temp)
    {
    if (search == temp->getName())
        {
            temp = temp->nextAccount;
            return true;
        }
    else
    {
        temp = temp->nextAccount;
    }
    }
    return false;
};