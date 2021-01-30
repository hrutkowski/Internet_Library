#include "accountloader.hpp"

accountloader::accountloader()
{

}

accountloader::accountloader(accountloader &accloader)
{
    AccList = accloader.AccList;
}


void accountloader::changeList(AccountList &accountList)
{
    AccList = &accountList;
}


void accountloader::saveDataBase(std::string filepath)
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

void accountloader::loadDataBase(std::string filepath)
{
   /* string line, name, password;
    inFile.exceptions(ifstream::failbit);
    try{
    inFile.open(filepath);
        while (getline(inFile, line))
        {
            istringstream iss(line);
            if (!(iss >> name >> password)) {break;}
                AccList->createAccount(name, password);
        }
    }
    catch (const ifstream::failure& fail)
    {
        std::cout << "error opening file (AccountDataBase.txt)!" << std::endl;
    }

    inFile.close(); */

    std::ifstream file(filepath);

    string name, password, line;

    if (file.is_open())
    {
        while (getline(file, line))
        {
            istringstream iss(line);
            if (!(iss >> name >> password)) {break;}
                AccList->createAccount(name, password);
        }
    }
};
