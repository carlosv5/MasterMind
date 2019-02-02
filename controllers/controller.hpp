#ifndef CONTROLLER
#define CONTROLLER

#include "../models/game.hpp"
#include "controllerVisitor.hpp"

class Controller
{
  public:
    Controller(Game *game){this->game=game;};
    virtual void accept(ControllerVisitor *controllerVisitor){};

  protected:
    Game *game;

};

#endif