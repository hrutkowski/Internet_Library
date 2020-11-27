#pragma once
#include <iostream>
#include <cstring>
#include "accountlist.hpp"
#include "account.cpp"

using namespace std;

AccountList::AccountList()
{
};

void AccountList::createAccount(string name, string password)
{
    Account newAccount(name, password);
    accountList.push_back(newAccount);
};

void AccountList::createAdmin(string name, string password, string key)
{
    Account newAccount(name, password, key);
    accountList.push_back(newAccount);
};


void AccountList::removeAccount(string name, string password) 
{
    for (int i=0; i<accountList.size(); i++)
    {
        if (accountList[i].getName() == name && accountList[i].getPassword() == password)
        {
            accountList.erase(accountList.begin()+i);
        };
    };
};

void AccountList::editAccount(string old, string change)
{
    for (int i=0; i<accountList.size(); i++)
    {
        if (accountList[i].getName() == old)
        {
            accountList[i].setName(change);
        };
        if (accountList[i].getPassword() == old)
        {
            accountList[i].setPassword(change);
        };
    };
};

void AccountList::displayAccounts()
{
    for (int i=0; i<accountList.size(); i++)
    {
       cout << "Name: " << accountList[i].getName() << endl;
       cout << "Password:" << accountList[i].getPassword() << endl; 
    };
};

void AccountList::displayCardNumber(string name, string password)
{
    vector<int> cardno;

    for (int i=0; i<accountList.size(); i++)
    {
        if (accountList[i].getName() == name && accountList[i].getPassword() == password)
        {
            cardno = accountList[i].getCardNo();
            for (int i=0; i<cardno.size(); i++)
            {
                cout << cardno[i];
            }
        }
    };
  
};
