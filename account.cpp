#pragma once
#include <iostream>
#include <cstring>
#include "account.hpp"

using namespace std;

Account::Account()
{
    name = "";
    password = "";
    cardnumber = 0;
    isAdmin = false;
};

Account::Account(string name, string password)
{
    name = name;
    password = password;
    cardnumber = 0;
};

Account::Account(string name, string password, string key)
{
    name = name;
    password = password;
    cardnumber = 0;
    if (key == "iamadmin") isAdmin = true;
    else 
    {
        isAdmin = false;
        cout << "Wrong key!" << endl;
    };
};

int Account::getCardNo()
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