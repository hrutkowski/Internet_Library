#pragma once
#include <cstring>
#include <iostream>

using namespace std;

class UserInput
{
public:
    UserInput();
    char receiveInput();
    string receiveStringInput();
    bool receiveBoolInput();
};