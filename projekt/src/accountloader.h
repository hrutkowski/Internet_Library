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
    void saveDataBase(std::string filepath) override;
    void loadDataBase(std::string filepath) override;
    AccountList *AccList;
};

#endif // ACCOUNTLOADER_H
