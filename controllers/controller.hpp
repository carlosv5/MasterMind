#ifndef CONTROLLER
#define CONTROLLER

#include "../models/game.hpp"

class Controller
{
  public:
    Controller(Game *game);
    virtual void control(){};

  protected:
    Game *game;

};

#endif