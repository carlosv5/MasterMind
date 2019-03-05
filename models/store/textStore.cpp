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

void TextStore::load(std::string title)
{
  std::string line;
  std::string path = "saveGames/" + title + ".txt";
  std::ifstream myfile (path.c_str());
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
        std::cout << "Reading line: " << line << std::endl;
      //cout << line << '\n';
    }
    myfile.close();
  }    
  else
    {
        std::cout << "Unable to open file" << std::endl;
    }

    std::cout << "loaded" << std::endl;
}