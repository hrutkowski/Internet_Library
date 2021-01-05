#pragma once
#include <cstring>
#include <iostream>
#include "userInput.hpp"

using namespace std;

UserInput::UserInput()
{
};

char UserInput::receiveInput()
{
    char input;
    cin >> input;
    return input;
};

string UserInput::receiveStringInput()
{
    string input;
    cin >> input;
    return input;
};

bool UserInput::receiveBoolInput()
{
    bool input;
    cin >> input;
    return input;
}