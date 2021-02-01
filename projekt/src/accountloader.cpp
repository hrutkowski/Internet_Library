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
    file.exceptions(ifstream::badbit);
    try
    {
        while (getline(file, line))
        {
            istringstream iss(line);
            if (!(iss >> name >> password)) {break;}
                AccList->createAccount(name, password);
        }
    }
    catch(const ifstream::failure &e)
    {
        QMessageBox messageBox;
        messageBox.setText("Error opening Account file!");
        messageBox.exec();
    }




};
