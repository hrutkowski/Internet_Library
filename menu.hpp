#pragma once
#include <iostream>
#include "accountlist.cpp"

using namespace std;

class Menu
{
public:
    void chooseMenu();
    void printLibraryMenu();
    void printAccountMenu();
    void switchLibraryMenu(); //do argumentu tej funkcji przekażemy listę książek, żeby wywoływała operacje na książkach
    void switchAccountMenu(AccountList &List); //analogicznie tutaj przekażemy listę kont i ta metoda będzie do operacji na kontach
};