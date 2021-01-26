#include "bookloader.hpp"


bookloader::bookloader()
{

}

void bookloader::changeList(BookList &bookList)
{
    BkList = &bookList;
}

void bookloader::loadDataBase(std::string filepath)
{
    std::ifstream file(filepath);

    string title, author, line;
    bool taken;
    file.exceptions(ifstream::failbit);
    try
    {
        file.open(filepath);
        while (getline(file, line))
        {
            istringstream iss(line);
            if (!(iss >> author >> title >> taken)) { break; }
            Book* ptr = new Book(title, author, taken);
            BkList->add(*ptr);
        }
    }
    catch(const ifstream::failure& fail)
    {
        std::cout << "error opening file (library)!" << endl;
    }
    file.close();
}

void bookloader::saveDataBase(std::string filepath)
{
    std::ofstream file(filepath, fstream::out);
    BookIt iter;

    if (file.is_open())
    {
        for(auto &iter : BkList->listGet())
        {
            file << iter.author() << " " << iter.title() << " " << iter.isTaken() << endl;
        }
    }
}
