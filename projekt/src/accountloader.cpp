#include "accountloader.hpp"

accountloader::accountloader()
{

}

void accountloader::loadDataBase(std::string filepath)
{
   outFile.open( filepath);
   AccountList List;

   for (int i=0; i < List.accountList.size(); i++)
   {
       outFile << List.accountList[i].getName() << " " << List.accountList[i].getPassword() << endl;
   }
   outFile.close();

};

void accountloader::saveDataBase(std::string filepath)
{
    inFile.open(filepath);
    AccountList List;
    string line, name, password;

    if (inFile.is_open())
    {
        while (getline(inFile, line))
        {
            istringstream iss(line);
            if (!(iss >> name >> password)) {break;}
            for (int i=0; i < List.accountList.size(); i++)
            {
                if (name != List.accountList[i].getName() && password !=  List.accountList[i].getPassword())
                List.createAccount(name, password);
            }
        }
    }
    inFile.close();
};
