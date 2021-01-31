#ifndef ACCOUNTLOADER_H
#define ACCOUNTLOADER_H

#include "accountlist.hpp"
#include "loader.hpp"


class accountloader : public loader
{
public:
    void changeAccountList(AccountList &accountList) override;
    void saveDataBase(std::string filepath) override;
    void loadDataBase(std::string filepath) override;

};

#endif // ACCOUNTLOADER_H
