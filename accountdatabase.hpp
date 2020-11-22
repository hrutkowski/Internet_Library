#pragma once
#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>
#include "account.cpp"

class AccountDataBase
{
    public:
    AccountDataBase();
    void loadDatabase();
}