#pragma once
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <random>
#include "account.hpp"

using namespace std;

Account::Account()
{
    isAdmin = false;
};

Account::Account(string name, string password)
{
    name = name;
    password = password;
    generateCardNo(cardnumber);
};

Account::Account(string name, string password, string key)
{
    name = name;
    password = password;
    generateCardNo(cardnumber);
    if (key == "iamadmin") isAdmin = true;
    else 
    {
        isAdmin = false;
        cout << "Wrong key!" << endl;
    };
};

vector<int> Account::getCardNo()
{
    return(cardnumber);
};

string Account::getName()
{
    return(name);
};

string Account::getPassword()
{
    return(password);
};

void Account::setName(string newName)
{
    name = newName;
};

void Account::setPassword(string newPassword)
{
    password = newPassword;
};

void Account::generateCardNo(vector<int> cardnumber)
{
    for (int i=0; i<10; i++)
    {
        auto x = rand()%10;
        cardnumber.push_back(x);
    };
}