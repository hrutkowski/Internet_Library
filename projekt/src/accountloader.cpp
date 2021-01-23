#include "accountloader.h"

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
     outFile.open(filepath);

    for (int i=0; i < AccList->accountList.size(); i++)
    {
        outFile << AccList->accountList[i].getName() << " " << AccList->accountList[i].getPassword() << endl;
    }
    outFile.close();
};

void accountloader::loadDataBase(std::string filepath)
{
    inFile.open(filepath);
    string line, name, password;

    if (inFile.is_open())
    {
        while (getline(inFile, line))
        {
            istringstream iss(line);
            if (!(iss >> name >> password)) {break;}
            for (int i=0; i < AccList->accountList.size(); i++)
            {
                if (name != AccList->accountList[i].getName() && password !=  AccList->accountList[i].getPassword())
                AccList->createAccount(name, password);
            }
        }
    }
    inFile.close();
};
