#include <iostream>
#include "txtmaster.hpp"
#include <memory>
#include "loader.hpp"

TxtMaster::TxtMaster(LoaderPtr loader)
    :Loader_(loader)
{
}
void changeList()
{

}
void saveDataBase(std::string filepath)
{
    Loader_->saveDataBase(filepath);
}
void loadDataBase(std::string filepath)
{
    Loader_->loadDataBase(filepath);
}
