#pragma once
#include <cstring>
#include <iostream>
#include "userInput.hpp"

using namespace std;

UserInput::UserInput()
{
    input = 0;
};

void UserInput::receiveInput()
{
    cin >> input;
};
