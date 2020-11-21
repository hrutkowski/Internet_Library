#pragma once
#include <cstring>
#include <iostream>
#include "userInput.hpp"

using namespace std;

UserInput::UserInput()
{
    input = 0;
    stringInput = " ";
};

void UserInput::receiveInput()
{
    cin >> input;
};

void UserInput::receiveStringInput()
{
    cin >> stringInput;
}

void UserInput::receiveBoolInput()
{
    cin >> boolInput;
}