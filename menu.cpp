#pragma once 
#include <iostream>
#include <unistd.h>
#include "menu.hpp"
#include "userInput.cpp"
#include "messenger.cpp"


using namespace std;

void Menu::chooseMenu()
{
    UserInput choice;
    AccountList List;
    BookList Books;
    BookTXT FileWorker;

    FileWorker.load_file(Books);

    system("clear");
    cout<<"Welcome in our amazing library"<<endl;
    cout<<"l - go to library menu"<<endl;
    cout<<"a - go to account menu"<<endl;

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
    system("clear");
    cout << "Library Menu" << endl;
    cout << "d - Add a book" << endl;
    cout << "a - Search for a book by author" << endl;
    cout << "t - Search for a book by title" << endl;
    cout << "r - Reserve a book" << endl;
    cout << "e - Return a book" << endl;
    cout << "q - Exit" << endl;
}

void Menu::printAccountMenu()
{
    system("clear");
    cout << "Account Menu" << endl;
    cout << "c - Create a new account" << endl;
    cout << "r - Remove and existing account" << endl;
    cout << "e - Edit an existing account" << endl;
};

void Menu::switchLibraryMenu(BookList &books, BookTXT &updater) 
{
    UserInput choice;
    Messenger mess;
    string buffer1, buffer2, sentence;
    bool buffer3;

    choice.receiveInput();

    switch(choice.input)
    {
        case 'a':
            system("clear");
            sentence = "Author of a book: ";
            mess.showText(sentence);
            choice.receiveStringInput();
            buffer1 = choice.stringInput;
            system("clear");
            cout << "Searching results:" << endl;
            books.search_by_author(buffer1);
            sleep(5);
            break;

        case 't':
            system("clear");
            cout << "Title of a book: ";
            choice.receiveStringInput();
            buffer1 = choice.stringInput;
            system("clear");
            cout << "Searching results:" << endl;
            books.search_by_title(buffer1);
            sleep(5);
            break;

        case 'r':
            system("clear");
            cout << "Author of a book: ";
            choice.receiveStringInput();
            buffer1 = choice.stringInput;
            system("clear");
            cout << "Title of a book: ";
            choice.receiveStringInput();
            buffer2 = choice.stringInput;
            system("clear");
            books.reserve_book(buffer1, buffer2);
            updater.update_file(books);
            break;

        case 'e':
            system("clear");
            cout << "Author of a book: ";
            choice.receiveStringInput();
            buffer1 = choice.stringInput;
            system("clear");
            cout << "Title of a book: ";
            choice.receiveStringInput();
            buffer2 = choice.stringInput;
            system("clear");
            books.return_book(buffer1, buffer2);
            updater.update_file(books);
            break;

        case 'd':
            system("clear");
            cout << "Type surname of the author of a book (if space use floor '_'): ";
            choice.receiveStringInput();
            buffer1 = choice.stringInput;
            system("clear");
            cout << "Type the title of a book (if space use floor '_'): ";
            choice.receiveStringInput();
            buffer2 = choice.stringInput;
            system("clear");
            cout << "Type 1 if taken and 0 if available: ";
            choice.receiveBoolInput();
            buffer3 = choice.boolInput;
            system("clear");
            books.add_book(buffer1, buffer2, buffer3);
            updater.update_file(books);
            break;

        case 'q':
            exit(0);
            break;

        default:
            system("clear");
            cout << "This key has no function! Try again." << endl;
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

    switch(choice.input)
    {
        case 'c':
            system("clear");
            message = "Name?";
            mess.showText(message);
            choice.receiveStringInput();
            buffer1 = choice.stringInput;
            message = "Password?";
            mess.showText(message);
            choice.receiveStringInput();
            buffer2 = choice.stringInput;
            accountList.createAccount(buffer1, buffer2);
            message = "Account created! Press any button to continue.";
            mess.showText(message);
            cin.get();
            cin.get();
            break;
        case 'r':
            system("clear");
            message = "Name?";
            mess.showText(message);
            choice.receiveStringInput();
            buffer1 = choice.stringInput;
            message = "Password?";
            mess.showText(message);
            choice.receiveStringInput();
            buffer2 = choice.stringInput;
            accountList.removeAccount(buffer1, buffer2);
            message = "Account removed! Press any button to continue.";
            mess.showText(message);
            cin.get();
            cin.get();
            break;
        case 'e':
            system("clear");
            message = "Name?";
            mess.showText(message);
            choice.receiveStringInput();
            buffer1 = choice.stringInput;
            if (accountList.findAccount(buffer1) == true)
            {
                message = "What would you like to do?\n p - change password\n n - change name\n";
                mess.showText(message);
                choice.receiveInput();
                switch(choice.input)
                    case 'p':
                    message = "Old password?";
                    mess.showText(message);
                    choice.receiveStringInput();
                    buffer1 = choice.stringInput;
                    message = "New password?";
                    mess.showText(message);
                    choice.receiveStringInput();
                    buffer2 = choice.stringInput;
                    accountList.editAccount(buffer1, buffer2);
                    case 'n':
                    message = "New name?";
                    mess.showText(message);
                    choice.receiveStringInput();
                    buffer2 = choice.stringInput;
                    accountList.editAccount(buffer1, buffer2);
            }
            message = "Edit succesful. Press any button to continue.";
            mess.showText(message);
            cin.get();
            cin.get();
            break;
        case 'q':
            exit(0);
            break;
    };  
}