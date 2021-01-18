#include <iostream>
#include <unistd.h>
#include "menu.hpp"



using namespace std;

Menu::Menu()
{
    DataBase.loadDatabase(accountList);
    Books = FileWorker.load("library.txt");
}




