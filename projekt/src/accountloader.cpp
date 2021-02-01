#include "accountloader.hpp"


void AccountLoader::changeAccountList(AccountList &accountList)
{
    AccList = &accountList;
}

void AccountLoader::changeBookList(BookList &bookList)
{
    BkList = &bookList;
}


void AccountLoader::saveDataBase(std::string filepath)
{
    std::ofstream file(filepath, fstream::out);

    if(file.is_open())
    {
        for (int i=0; i < AccList->accountList.size(); i++)
        {
            file << AccList->accountList[i].getName() << " " << AccList->accountList[i].getPassword() << endl;
        }
    }
};

void AccountLoader::loadDataBase(std::string filepath)
{
    std::ifstream file(filepath);
    string name, password, line;
    if(file.is_open())
    {
    while (getline(file, line))
    {
        istringstream iss(line);
        if (!(iss >> name >> password)) {break;}
            AccList->createAccount(name, password);
    }
    }
    else
    {
        throw invalid_argument("Error opening accounts file!");
    };
};
