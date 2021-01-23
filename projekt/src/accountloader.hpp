#ifndef ACCOUNTLOADER_HPP
#define ACCOUNTLOADER_HPP

#include "loader.hpp"

class accountloader : public loader
{
public:
    accountloader();
    void loadDataBase(std::string filepath) override;
    void saveDataBase(std::string filepath) override;
    std::ifstream inFile;
    std::ofstream outFile;
};

#endif // ACCOUNTLOADER_HPP
