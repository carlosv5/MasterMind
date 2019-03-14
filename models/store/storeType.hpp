#ifndef STORE_TYPE
#define STORE_TYPE
#include <stdlib.h>
#include <iostream>
#include "../game.hpp"
#include <vector>

class StoreType
{

  public:
    StoreType(Game* game){this->game = game;};
    virtual void save(std::string title) = 0;
    virtual std::string * load(std::string title) = 0;
    virtual void read_directory(std::vector<std::string>& v) = 0;

  protected:
    Game* game;
    
};

#endif