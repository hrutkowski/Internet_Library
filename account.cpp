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
};

Account::Account(string name, string password)
{
    name = name;
    password = password;
    cardnumber = 0;
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