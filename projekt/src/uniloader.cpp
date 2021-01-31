#include "uniloader.h"

UniLoader::UniLoader()
{

}

UniLoader::UniLoader(UniLoader &uniLoader)
{
    loader_ = uniLoader.loader_;
}

UniLoader::UniLoader(LoaderPTR loader)  : loader_(loader)
{

}

void UniLoader::loadDataBase(std::string filepath)
{
    loader_->loadDataBase(filepath);
}

void UniLoader::saveDataBase(std::string filepath)
{
    loader_->saveDataBase(filepath);
}

void UniLoader::changeBookList(BookList &bookList)
{
    loader_->changeBookList(bookList);
}

void UniLoader::changeAccountList(AccountList &accountList)
{
    loader_->changeAccountList(accountList);
}
