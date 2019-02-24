#ifndef GAME_MENU_CONTROLLER
#define GAME_MENU_CONTROLLER

#include "../models/game.hpp"
#include "colocateController.hpp"

class GameMenuController
{
  public:
    virtual State getState() = 0;
    virtual ColocateController * getColocateController() {};
    virtual void surrender() = 0;

};

#endif