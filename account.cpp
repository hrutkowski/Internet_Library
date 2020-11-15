#pragma once
#include <iostream>
#include <cstring>
#include "account.hpp"

using namespace std;

Account::Account()
{
    
};

Account::Account(string name, string password)
{
    name = name;
    password = password;
};

void Account::setName(string newName)
{
    name = newName;
};

void Account::setPassword(string newPassword)
{
    password = newPassword;
};

