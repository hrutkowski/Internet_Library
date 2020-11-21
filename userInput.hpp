#pragma once
#include <cstring>
#include <iostream>

using namespace std;

class UserInput
{
public:
    char input;
    string stringInput;
    bool boolInput;
    UserInput();
    void receiveInput();
    void receiveStringInput();
    void receiveBoolInput();
};