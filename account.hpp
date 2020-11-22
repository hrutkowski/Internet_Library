#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class Account
{
private:
    string name;
    string password;
    int cardnumber;
    bool isAdmin;
public:
    Account();
    Account(string name, string password);
    Account(string name, string password, string key);
    Account *nextAccount;
    void generateCard();
    int getCardNo();
    string getName();
    string getPassword();
    void setName(string newName);
    void setPassword(string newPassword);
};