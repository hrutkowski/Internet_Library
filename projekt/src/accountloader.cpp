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
     outFile.open(filepath);

    for (int i=0; i < AccList->accountList.size(); i++)
    {
        outFile << AccList->accountList[i].getName() << " " << AccList->accountList[i].getPassword() << endl;
    }
    outFile.close();
};

void accountloader::loadDataBase(std::string filepath)
{
    string line, name, password;
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

    inFile.close();
};
