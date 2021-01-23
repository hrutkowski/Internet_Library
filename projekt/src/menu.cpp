#include <iostream>
#include <unistd.h>
#include "menu.hpp"



using namespace std;

Menu::Menu()
{
    accloader.changeList(accountList);
    accloader.loadDataBase("AccountDataBase.txt");
};

