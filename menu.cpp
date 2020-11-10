#pragma once 
#include <iostream>
#include "menu.hpp"
#include "userInput.hpp"

using namespace std;

void Menu::chooseMenu()
{
    UserInput choice;

    cout<<"Welcome in our amazing library"<<endl;
    cout<<"l - go to library menu"<<endl;
    cout<<"a - go to account menu"<<endl;

    choice.receiveInput();

    switch(choice.input)
    {
        case 'a':

        case 'l':
        
    };
}

void Menu::printMenu()
{

}


