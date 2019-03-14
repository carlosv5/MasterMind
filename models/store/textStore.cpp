#include "textStore.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>
#include <string.h>


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
 
void TextStore::read_directory(std::vector<std::string>& v)
{
    std::string name = "./saveGames/";
    DIR* dirp = opendir(name.c_str());
    struct dirent * dp;
    while ((dp = readdir(dirp)) != NULL) {
        if ( !strcmp(dp->d_name, ".") || !strcmp(dp->d_name, "..") ) {
            continue;
        } else {
            std::string name = dp->d_name;
            size_t lastindex = name.find_last_of("."); 
            std::string rawname = name.substr(0, lastindex); 
            v.push_back(rawname);
        }
    }
    closedir(dirp);
}