#include "textStore.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

void TextStore::save(std::string title)
{
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

std::string * TextStore::load(std::string title)
{
    std::string line;
    std::string path = "saveGames/" + title + ".txt";
    std::ifstream myfile(path.c_str());
    std::string * gameString = new std::string;
    if (myfile.is_open())
    {
        std::stringstream strStream;
        strStream << myfile.rdbuf();
        *gameString = strStream.str();
        myfile.close();
    }
    else
    {
        std::cout << "Unable to open file" << std::endl;
    }
    return gameString;
}