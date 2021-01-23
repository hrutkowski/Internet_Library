#ifndef ACCOUNTLOADER_H
#define ACCOUNTLOADER_H

#include "accountlist.hpp"
#include "loader.hpp"


class accountloader : public loader
{
public:
    accountloader();
    accountloader(AccountList &accountList);
    void loadDataBase(std::string filepath) override;
    void saveDataBase(std::string filepath);
};

#endif // ACCOUNTLOADER_H
