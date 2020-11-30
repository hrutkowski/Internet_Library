#pragma once
#include <iostream>
#include <unistd.h>
#include "menu.hpp"
#include "userInput.cpp"
#include "messenger.cpp"
#include "accountdatabase.cpp"

using namespace std;

void Menu::chooseMenu()
{
    UserInput choice;
    AccountList accountList;
    BookList Books;
    BookTXT FileWorker;
    Messenger mess;
    AccountDataBase DataBase;

    DataBase.loadDatabase(accountList);
    Books = FileWorker.load("library.txt");

    system("clear");
    mess.showText("Welcome in our amazing library ");
    mess.showText("l - go to library menu ");
    mess.showText("a - go to account menu ");

    choice.receiveInput();

    switch (choice.input)
    {
    case 'a':
        for (;;)
        {
            printAccountMenu(mess);
            switchAccountMenu(accountList, DataBase, mess, choice);
        };
        break;
    case 'l':
        while (1)
        {
            printLibraryMenu();
            switchLibraryMenu(Books);
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

void Menu::printAccountMenu(Messenger &mess)
{
    system("clear");
    mess.showText("Account Menu ");
    mess.showText("c - Create Account ");
    mess.showText("r - Remove Account ");
    mess.showText("e - Edit Account Information ");
    mess.showText("d - Display Card Number");
    mess.showText("g - display account list");
    mess.showText("q - Quit");
};

void Menu::switchLibraryMenu(BookList &books)
{
    UserInput choice;
    Messenger mess;
    string buffer1, buffer2;
    bool buffer3;

    choice.receiveInput();

    switch (choice.input)
    {
    case 'a':
            system("clear");
            mess.showText("Author of a book: ");
            choice.receiveStringInput();
            buffer1 = choice.stringInput;
            system("clear");
            mess.showText("Searching results: ");
            for (int i=0; i < books.searchAuthor(buffer1).size(); i++)
            {
                cout << (*books.searchAuthor(buffer1)[i]).author() << " " << (*books.searchAuthor(buffer1)[i]).title()<< " ";
                if((*books.searchAuthor(buffer1)[i]).isTaken()==true) mess.showText("Taken");
                else mess.showText("Available");
            }
            sleep(3);
            break;
        
        case 't':
            system("clear");
            mess.showText("Title of a book: ");
            choice.receiveStringInput();
            buffer1 = choice.stringInput;
            system("clear");
            mess.showText("Searching results: ");
            for (int i=0; i < books.searchTitle(buffer1).size(); i++)
            {
                cout << (*books.searchTitle(buffer1)[i]).author() << " " << (*books.searchTitle(buffer1)[i]).title()<< " ";
                if((*books.searchTitle(buffer1)[i]).isTaken()==true) mess.showText("Taken");
                else mess.showText("Available");
            }
            sleep(3);
            break;
        
        case 'r':
            system("clear");
            mess.showText("Author of a book: ");
            choice.receiveStringInput();
            buffer1 = choice.stringInput;
            system("clear");
            mess.showText("Title of a book: ");
            choice.receiveStringInput();
            buffer2 = choice.stringInput;
            system("clear");
            mess.showText("Result: ");
            if(books.findReserve(buffer1, buffer2)==true) mess.showText("Success");
            else mess.showText("Fail");
            //updater.update_file(books);
            sleep(3);
            break;
        
        case 'e':
            system("clear");
            mess.showText("Author of a book: ");
            choice.receiveStringInput();
            buffer1 = choice.stringInput;
            system("clear");
            mess.showText("Title of a book: ");
            choice.receiveStringInput();
            buffer2 = choice.stringInput;
            system("clear");
            mess.showText("Result: ");
            if(books.findReturn(buffer1, buffer2)==true) mess.showText("Success");
            else mess.showText("Fail");
            //updater.update_file(books);
            sleep(3);
            break;
        
        case 'd':
            system("clear");
            mess.showText("Type surname of the author of a book (if space use floor '_'): ");
            choice.receiveStringInput();
            buffer1 = choice.stringInput;
            system("clear");
            mess.showText("Type the title of a book (if space use floor '_'): ");
            choice.receiveStringInput();
            buffer2 = choice.stringInput;
            system("clear");
            books.add(Book(buffer2, buffer1));
            //updater.update_file(books);
            break;

        case 'q':
            exit(0);
            break;

        default:
            system("clear");
            mess.showText("This key has no function! Try again ");
            sleep(3);
            break;
    }
}

void Menu::switchAccountMenu(AccountList &accountList, AccountDataBase &DataBase, Messenger &mess, UserInput &choice)
{
    string buffer1, buffer2;
    string message;

    choice.receiveInput();

    switch (choice.input) 
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
        DataBase.saveDataBase(accountList);
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
        DataBase.saveDataBase(accountList);
        cin.get();
        cin.get();
        break;
    case 'e':
        system("clear");
        mess.showText("What would you like to do?\n p - change password\n n - change name\n");
        choice.receiveInput();
        switch (choice.input)
        case 'p':
        mess.showText("Old password?");
        choice.receiveStringInput();
        buffer1 = choice.stringInput;
        mess.showText("New password?");
        choice.receiveStringInput();
        buffer2 = choice.stringInput;
        accountList.editAccount(buffer1, buffer2);
        mess.showText("Edit successful. Press any button to continue");
        DataBase.saveDataBase(accountList);
        case 'n':
        mess.showText("Name?");
        choice.receiveStringInput();
        buffer2 = choice.stringInput;
        accountList.editAccount(buffer1, buffer2);
        mess.showText("Edit successful. Press any button to continue");
        DataBase.saveDataBase(accountList);
        cin.get();
        cin.get();
        break;
    case 'd':
        system("clear");
        mess.showText("Name?");
        choice.receiveStringInput();
        buffer1 = choice.stringInput;
        mess.showText("Password?");
        choice.receiveStringInput();
        buffer2 = choice.stringInput;
        accountList.displayCardNumber(buffer1, buffer2);
        cin.get();
        cin.get();
        break;
    case 'g':
        system("clear");
        mess.showText("List of accounts:");
        accountList.displayAccounts();
        cin.get();
        cin.get();
        break;
    case 'q':
        exit(0);
        break;
    };
}