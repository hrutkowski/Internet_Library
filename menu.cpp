#pragma once 
#include <iostream>
#include <unistd.h>
#include "menu.hpp"
#include "userInput.cpp"
#include "messenger.cpp"
#include "bookmanager.cpp"


using namespace std;

void Menu::chooseMenu()
{
    UserInput choice;
    AccountList List;
    BookList Books;
    BookTXT FileWorker;
    Messenger mess;

    FileWorker.load_file(Books, "library.txt");

    system("clear");
    mess.showText("Welcome in our amazing library ");
    mess.showText("l - go to library menu ");
    mess.showText("a - go to account menu ");

    choice.receiveInput();

    switch(choice.input)
    {
        case 'a':
            for(;;)
            {
            printAccountMenu();
            switchAccountMenu(List);
            };
            break;
        case 'l':
            while(1)
            {
            printLibraryMenu();
            switchLibraryMenu(Books, FileWorker);
            }
            break;
    };  
}

void Menu::printLibraryMenu()
{
    Messenger mess;

    system("clear");
    mess.showText("Library Menu ");
    mess.showText("d - Add a book ");
    mess.showText("a - Search for a book by author ");
    mess.showText("t - Search for a book by title ");
    mess.showText("r - Reserve a book ");
    mess.showText("e - Return a book ");
    mess.showText("q - Exit");
}

void Menu::printAccountMenu()
{
    Messenger mess;

    system("clear");
    mess.showText("Account Menu ");
    mess.showText("c - Create Account ");
    mess.showText("r - Remove Account ");
    mess.showText("e - Edit Account Information ");
    mess.showText("d - Display Card Number");
    mess.showText("q - Quit");
};

void Menu::switchLibraryMenu(BookList &books, BookTXT &updater) 
{
    UserInput choice;
    Messenger mess;
    BookManager manager;
    string buffer1, buffer2;
    bool buffer3;

    choice.receiveInput();

    switch(choice.input)
    {
        case 'a':
            manager.optionA(books);
            break;

        case 't':
            manager.optionT(books);
            break;

        case 'r':
            manager.optionR(books, updater);
            break;

        case 'e':
            manager.optionE(books, updater);
            break;

        case 'd':
            manager.optionD(books, updater);
            break;

        case 'q':
            manager.optionQ();
            break;

        default:
            manager.optionDefault();
            break;
    }
}

void Menu::switchAccountMenu(AccountList &accountList)
{
    UserInput choice;
    Messenger mess;
    string buffer1, buffer2;
    string message;

    choice.receiveInput();

    switch(choice.input) //todo: add findaccount check before each function
    {
        case 'c':
            system("clear");
            mess.showText("Name?");
            choice.receiveStringInput();
            buffer1 = choice.stringInput;
            mess.showText("Password?");
            choice.receiveStringInput();
            buffer2 = choice.stringInput;
            accountList.createAccount(buffer1, buffer2);
            mess.showText("Account created! Press any button to continue");
            cin.get();
            cin.get();
            break;
        case 'r':
            system("clear");
            mess.showText("Name?");
            choice.receiveStringInput();
            buffer1 = choice.stringInput;
            mess.showText("Password?");
            choice.receiveStringInput();
            buffer2 = choice.stringInput;
            accountList.removeAccount(buffer1, buffer2);
            mess.showText("Account removed! Press any button to continue");
            cin.get();
            cin.get();
            break;
        case 'e':
            system("clear");
            mess.showText("Name?");
            choice.receiveStringInput();
            buffer1 = choice.stringInput;
            if (accountList.findAccount(buffer1) == true)
            {
                mess.showText("What would you like to do?\n p - change password\n n - change name\n");
                choice.receiveInput();
                switch(choice.input)
                    case 'p':
                    mess.showText("Old password?");
                    choice.receiveStringInput();
                    buffer1 = choice.stringInput;
                    mess.showText("New password?");
                    choice.receiveStringInput();
                    buffer2 = choice.stringInput;
                    accountList.editAccount(buffer1, buffer2);
                    case 'n':
                    mess.showText("Name?");
                    choice.receiveStringInput();
                    buffer2 = choice.stringInput;
                    accountList.editAccount(buffer1, buffer2);
            }
            mess.showText("Edit successful. Press any button to continue");
            cin.get();
            cin.get();
            break;
        case 'd':
            system("clear");
            mess.showText("Name?");
            choice.receiveStringInput();
            buffer1 = choice.stringInput;
            if (accountList.findAccount(buffer1) == true)
            {
                system("clear");
                mess.showText("Password?");
                choice.receiveStringInput();
                buffer2 = choice.stringInput;
                accountList.displayCardNumber(buffer1, buffer2);
                cin.get();
                cin.get();
            }
        case 'q':
            exit(0);
            break;
    };  
}