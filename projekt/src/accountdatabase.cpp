
#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>
#include "accountdatabase.hpp"

AccountDataBase::AccountDataBase()
{

};

void AccountDataBase::saveDataBase(AccountList &List)
{
     outFile.open( "AccountDataBase.txt");
    
    for (int i=0; i < List.accountList.size(); i++)
    {
        outFile << List.accountList[i].getName() << " " << List.accountList[i].getPassword() << endl;
    }
    outFile.close();
};

void AccountDataBase::loadDatabase(AccountList &List)
{
    inFile.open("AccountDataBase.txt");
    string line, name, password;

    if (inFile.is_open())
    {
        while (getline(inFile, line))
        {
            istringstream iss(line);
            if (!(iss >> name >> password)) {break;}
            for (int i=0; i < List.accountList.size(); i++)
            {
                if (name != List.accountList[i].getName() && password !=  List.accountList[i].getPassword())
                List.createAccount(name, password);
            }
        }
    }
    inFile.close();
};

