#pragma once
#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>
#include "accountlist.cpp"

struct AccountDataBase
{
    AccountDataBase();
    void loadDatabase(AccountList &List);
    void saveDataBase(AccountList &List);
    void eraseDataBase(AccountList &List);
    ifstream inFile;
    ofstream outFile;
};