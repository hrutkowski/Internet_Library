#include "bookloader.hpp"

void BookLoader::changeBookList(BookList &bookList)
{
    BkList = &bookList;
}

void BookLoader::changeAccountList(AccountList &accountList)
{
    AccList = &accountList;
}

void BookLoader::loadDataBase(std::string filepath)
{
    std::ifstream file(filepath);

    string title, author, line;
    bool taken;
    file.open(filepath);
    while (getline(file, line))
    {
        istringstream iss(line);
        if (!(iss >> author >> title >> taken)) { break; }
        std::cout <<author;
        Book *ptr = new Book(title, author, taken);
        std:cout << ptr->title();
        BkList->add(*ptr);
    }
}


void BookLoader::saveDataBase(std::string filepath)
{
    std::ofstream file(filepath, fstream::out);
    BookIt iter;

    if (file.is_open())
    {
        for(auto &iter : BkList->listGet())
        {
            file << iter.author() << " " << iter.title() << " " << iter.isTaken() << endl;
        }
    }
}
