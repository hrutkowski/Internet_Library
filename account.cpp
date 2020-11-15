#pragma once
#include <iostream>
#include <cstring>
#include "account.hpp"

using namespace std;

Account::Account()
{
    name = "";
    password = "";
};

Account::Account(string name, string password)
{
    name = name;
    password = password;
};

