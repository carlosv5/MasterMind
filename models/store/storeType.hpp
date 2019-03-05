#ifndef STORE_TYPE
#define STORE_TYPE
#include <stdlib.h>
#include <iostream>
#include "../game.hpp"

class StoreType
{

  public:
    StoreType(Game* game){this->game = game;};
    virtual void save(std::string title) = 0;
    virtual void load(std::string title) = 0;

  protected:
    Game* game;
    
};

#endif