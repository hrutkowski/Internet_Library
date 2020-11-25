#pragma once
#include <iostream>
#include <cstring>
#include "accountlist.hpp"
#include "account.cpp"

using namespace std;

AccountList::AccountList()
{
    accountList.clear();
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
    for (int i=0; i==sizeof(accountList); i++)
    {
        if (accountList[i].getName()== name && accountList[i].getPassword() == password)
        {
            accountList.erase(accountList.begin()+i);
            cout<<"success"<<endl;
        };
    };
};

void AccountList::editAccount(string old, string change)
{
    for (int i=0; i==sizeof(accountList); i++)
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
    for (int i=0; i==sizeof(accountList); i++)
    {
       cout << "Name: " << accountList[i].getName() << "Password:" << accountList[i].getPassword() << endl; 
    };
};

void AccountList::displayCardNumber(string name, string password)
{
    for (int i=0; i==sizeof(accountList); i++)
    {
        if (accountList[i].getName()== name && accountList[i].getPassword() == password)
        {
            accountList[i].getCardNo();
        };
    };
  
};
