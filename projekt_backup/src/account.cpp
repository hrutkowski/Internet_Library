#pragma once
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <random>
#include "account.hpp"

using namespace std;

Account::Account()
{
};

Account::Account(string newname, string newpassword)
{
    name = newname;
    password = newpassword;
    for (int i=0; i<10; i++)
    {
        auto x = rand()%10;
        cardnumber.push_back(x);
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
