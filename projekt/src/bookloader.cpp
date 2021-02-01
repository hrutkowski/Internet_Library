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
    else
    {
        throw invalid_argument("Error opening file!");
    };
    if (filepath != "Library.txt") throw invalid_argument("Library.txt not opened!");
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
