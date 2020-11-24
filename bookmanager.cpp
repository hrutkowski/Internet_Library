#pragma once
#include <iostream>
#include "booklist.hpp"
#include "book.cpp"
#include "messenger.cpp"
#include "userInput.hpp"
#include "bookmanager.hpp"

void BookManager::optionA(BookList &books)
{
    UserInput choice;
    Messenger mess;
    string buffer1, buffer2, sentence;
    bool buffer3;

    system("clear");
    mess.showText("Author of a book: ");
    choice.receiveStringInput();
    buffer1 = choice.stringInput;
    system("clear");
    mess.showText("Searching results: ");
    books.search_by_author(buffer1);
    sleep(3);
}

void BookManager::optionT(BookList &books)
{
    UserInput choice;
    Messenger mess;
    string buffer1, buffer2, sentence;
    bool buffer3;

    system("clear");
    mess.showText("Title of a book: ");
    choice.receiveStringInput();
    buffer1 = choice.stringInput;
    system("clear");
    mess.showText("Searching results: ");
    books.search_by_title(buffer1);
    sleep(3);
}

void BookManager::optionR(BookList &books, BookTXT &updater)
{
    UserInput choice;
    Messenger mess;
    string buffer1, buffer2, sentence;
    bool buffer3;

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
    books.reserve_book(buffer1, buffer2);
    updater.update_file(books, "library.txt");
    sleep(3);
}

void BookManager::optionE(BookList &books, BookTXT &updater)
{
    UserInput choice;
    Messenger mess;
    string buffer1, buffer2, sentence;
    bool buffer3;

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
    updater.update_file(books, "library.txt");
    sleep(3);
}

void BookManager::optionD(BookList &books, BookTXT &updater)
{
    UserInput choice;
    Messenger mess;
    string buffer1, buffer2, sentence;
    bool buffer3;

    system("clear");
    mess.showText("Type surname of the author of a book (if space use floor '_'): ");
    choice.receiveStringInput();
    buffer1 = choice.stringInput;
    system("clear");
    mess.showText("Type the title of a book (if space use floor '_'): ");
    choice.receiveStringInput();
    buffer2 = choice.stringInput;
    system("clear");
    mess.showText("Type 1 if taken and 0 if available: ");
    choice.receiveBoolInput();
    buffer3 = choice.boolInput;
    system("clear");
    books.add_book(buffer1, buffer2, buffer3);
    updater.update_file(books, "library.txt");
}
