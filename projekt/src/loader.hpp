#ifndef LOADER_HPP
#define LOADER_HPP

#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>
#include "accountlist.hpp"
#include "booklist.hpp"


class loader
{
public:
    loader();
    virtual void loadDataBase(std::string filepath);
    virtual void saveDataBase(std::string filepath);
    std::ifstream inFile;
    std::ofstream outFile;
};

#endif // LOADER_HPP
