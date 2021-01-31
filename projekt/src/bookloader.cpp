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

    if (file.is_open())
    {
        while (getline(file, line))
        {
            istringstream iss(line);
            if (!(iss >> author >> title >> taken)) { break; }
            Book *ptr = new Book(title, author, taken);
            BkList->add(*ptr);
        }
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
