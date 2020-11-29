#pragma once 
#include <iostream>
#include <unistd.h>
#include "menu.hpp"
#include "userInput.cpp"
#include "messenger.cpp"

#include <map>

using namespace std;
/*
class MyMenu
{

public:
    MyMenu()
    {
        menuItems_.push_back(std::make_pair("a", SubMenuA()));
    }

    void run()
    {
        showOptions();
        auto user_input = takeUserInput();
        runSubMenu(user_input);
    }

private:
        void showOptions()
        {
            for(auto & item : menuItems_)
            {
                std::cout << item.first << " - " << item.second->getName() << "\n";
            }
        }
        std::string  takeUserInput()
        {
            getline();;...
            return ...
        }

        runSubMenu(const std::string& user_input)
        {
            auto it = menuItems_.find(user_input);
            if(it != menuItems_.end())
            {
                it->second->run();
            }
        }
    
    

private:
    std::map<std::string, MenuObj> menuItems_;
};
*/


void Menu::chooseMenu()
{
    UserInput choice;
    AccountList List;
    BookList Books;
    Messenger mess;

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

void Menu::printAccountMenu()
{
    system("clear");
    cout << "Account Menu" << endl;
    cout << "c - Create a new account" << endl;
    cout << "r - Remove and existing account" << endl;
    cout << "e - Edit an existing account" << endl;
    cout << "d - Display card number" << endl;
};

void Menu::switchLibraryMenu(BookList &books) 
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
            if(books.find(buffer1, buffer2)==0) mess.showText("Success");
            else mess.showText("Fail");
            //updater.update_file(books);
            sleep(3);
            break;
        /*
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
            books.return_book(buffer1, buffer2);
            updater.update_file(books);
            sleep(3);
            break;
        */
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
        case 'd':
            system("clear");
            message = "Name?";
            mess.showText(message);
            choice.receiveStringInput();
            buffer1 = choice.stringInput;
            if (accountList.findAccount(buffer1) == true)
            {
                system("clear");
                message = "Password?";
                mess.showText(message);
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