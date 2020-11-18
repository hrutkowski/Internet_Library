#pragma once 
#include <iostream>
#include <unistd.h>
#include "menu.hpp"
#include "userInput.cpp"


using namespace std;

void Menu::chooseMenu()
{
    UserInput choice;
    AccountList List;
    BookList Books;

    BookTXT Fileloader;
    Fileloader.loadFile(Books);

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
            switchLibraryMenu(Books);
            }
            break;
    };  
}

void Menu::printLibraryMenu()
{
    system("clear");
    cout << "Library Menu" << endl;
    cout << "a - Search for a book by author" << endl;
    cout << "t - Search for a book by title" << endl;
    cout << "r - Reserve a book" << endl;
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

void Menu::switchLibraryMenu(BookList &books) 
{
    UserInput choice;
    string buffer1, buffer2;

    choice.receiveInput();

    switch(choice.input)
    {
        case 'a':
            system("clear");
            cout << "Author of a book: ";
            cin >> buffer1;
            system("clear");
            books.search_by_author(buffer1);
            sleep(5);
            break;
        case 't':
            system("clear");
            cout << "Title of a book: ";
            cin >> buffer1;
            system("clear");
            books.search_by_title(buffer1);
            sleep(5);
            break;

        case 'r':
            system("clear");
            cout << "Author of a book: ";
            cin >> buffer1;
            system("clear");
            cout << "Title of a book: ";
            cin >> buffer2;
            system("clear");
            books.reserve_book(buffer1, buffer2);
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
    string buffer1, buffer2;

    choice.receiveInput();

    switch(choice.input)
    {
        case 'c':
            system("clear");
            cout << "Name?" << endl;
            cin >> buffer1;
            cout << "Password?" << endl;
            cin >> buffer2;
            accountList.createAccount(buffer1, buffer2);
            cout << "Account created!" << endl;
            break;
        case 'r':
            system("clear");
            cout << "Name?" << endl;
            cin >> buffer1;
            cout << "Password?" << endl;
            cin >> buffer2;
            accountList.removeAccount(buffer1, buffer2);
            break;
        case 'e':
            system("clear");
            cout << "Name?" << endl;
            cin >> buffer1;
            accountList.editAccount(buffer1);
            break;
        case 'q':
            exit(0);
            break;
    };  
}