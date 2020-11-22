#pragma once
#include <iostream>
#include <cstring>
#include <random>
#include "account.hpp"

using namespace std;

unsigned int rand_i(unsigned int min, unsigned int max)
{
    static std::random_device rd;
    static std::mt19937 gen(rd()); 
    std::uniform_int_distribution<unsigned int> distrib(min, max);
 
    return distrib(gen);
};

Account::Account()
{
    isAdmin = false;
};

Account::Account(string name, string password)
{
    name = name;
    password = password;
     generateCardNo(cardnumber);
};

Account::Account(string name, string password, string key)
{
    name = name;
    password = password;
     generateCardNo(cardnumber);
    if (key == "iamadmin") isAdmin = true;
    else 
    {
        isAdmin = false;
        cout << "Wrong key!" << endl;
    };
};

vector<int> Account::getCardNo()
{
    return(cardnumber);
};

string Account::getName()
{
    return(name);
};

string Account::getPassword()
{
    return(password);
};

void Account::setName(string newName)
{
    name = newName;
};

void Account::setPassword(string newPassword)
{
    password = newPassword;
};

void Account::generateCardNo(vector<int> cardnumber)
{
    for (int i=0; i<10; i++)
    {
        auto x = rand_i(0,9);
        cardnumber.push_back(x);
    };
}