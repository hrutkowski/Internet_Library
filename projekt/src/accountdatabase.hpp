#ifndef ACCOUNTDATABASE__HPP
#define ACCOUNTDATABASE__HPP

#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>
#include "accountlist.hpp"

struct AccountDataBase
{
    AccountDataBase();
    void loadDatabase(AccountList &List);
    void saveDataBase(AccountList &List);
    ifstream inFile;
    ofstream outFile;
};

#endif

