#include "textStore.hpp"
#include <iostream>
#include <fstream>

void TextStore::save(std::string title)
{
    std::cout << "saved " << title << std::endl;
    std::string path = "saveGames/" + title + ".txt";
    std::ofstream myfile(path.c_str());
    if (myfile.is_open())
    {
        myfile << game->toString();
        myfile.close();
    }
    else
    {
        std::cout << "Unable to open file" << std::endl;
    }
}

void TextStore::load()
{
    std::cout << "loaded" << std::endl;
}