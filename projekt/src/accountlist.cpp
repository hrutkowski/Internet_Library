
#include <iostream>
#include <cstring>
#include "accountlist.hpp"


using namespace std;

AccountList::AccountList()
{
};

void AccountList::createAccount(string name, string password)
{
    Account newAccount(name, password);
    accountList.push_back(newAccount);
};

void AccountList::displayAccounts()
{
    for (int i=0; i<accountList.size(); i++)
    {
       cout << "Name: " << accountList[i].getName() << endl;
       cout << "Password: " << accountList[i].getPassword() << endl;
    };
};


void AccountList::displayCardNumber(string name, string password)
{
    vector<int> cardno;

    for (int i=0; i<accountList.size(); i++)
    {
        if (accountList[i].getName() == name && accountList[i].getPassword() == password)
        {
            cardno = accountList[i].getCardNo();
            for (int i=0; i<cardno.size(); i++)
            {
                cout << cardno[i];
            }
        }
    };
  
};

bool AccountList::loginAccount(string name, string password)
{
    for (int i=0; i<accountList.size(); i++)
    {
        if (accountList[i].getName() == name && accountList[i].getPassword() == password)
        {
            return true;
        };
    };

}
