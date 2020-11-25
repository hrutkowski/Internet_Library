#pragma once
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
    bool isAdmin;
public:
    Account();
    ~Account();
    Account(string name, string password);
    Account(string name, string password, string key);
    Account *nextAccount;
    void generateCardNo(vector<int> cardnumber);
    vector<int> getCardNo();
    string getName();
    string getPassword();
    void setName(string newName);
    void setPassword(string newPassword);
};