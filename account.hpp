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
public:
    Account();
    Account(string name, string password);
    Account *nextAccount;
    void generateCard();
    void getCardNo();
    string getName();
    string getPassword();
    void setName(string newName);
    void setPassword(string newPassword);
};