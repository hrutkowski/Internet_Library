#ifndef ACCOUNTLOADER_H
#define ACCOUNTLOADER_H

#include "accountlist.hpp"
#include "loader.hpp"


class accountloader : public loader
{
public:
    accountloader();
    accountloader(accountloader &accloader);
    void changeList(AccountList &accountList);
    void saveDataBase(std::string filepath);
    void loadDataBase(std::string filepath) override;
};

#endif // ACCOUNTLOADER_H
