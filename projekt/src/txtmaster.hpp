#ifndef TXTMaster
#define TXTMaster

#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>
#include <memory>
#include "loader.hpp"

using LoaderPtr = std::shared_ptr<Loader>;

class TxtMaster
{
private:
     LoaderPtr Loader_;
public:
    TxtMaster(LoaderPtr loader)
    :Loader_(loader)
    {}
    void saveDataBase(std::string filepath)
    {
        Loader_->saveDataBase(filepath);
    }
    void loadDataBase(std::string filepath)
    {
        Loader_->loadDataBase(filepath);
    }

};

#endif // TXTMaster
