#ifndef ACCOUNT__HPP
#define ACCOUNT__HPP

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class Account
{
private:
    string name;
    string password;
    vector<int> cardnumber;
public:
    Account();
    Account(string name, string password);
    vector<int> getCardNo();
    string getName();
    string getPassword();
    void setName(string newName);
    void setPassword(string newPassword);
};

#endif
