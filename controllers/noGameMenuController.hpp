#ifndef NO_GAME_MENU_CONTROLLER
#define NO_GAME_MENU_CONTROLLER

#include "../models/game.hpp"
#include "colocateController.hpp"
#include "../models/mementoRegistry.hpp"

class NoGameMenuController
{
  public:
    virtual void start() = 0;
    virtual void resume() = 0;
    virtual void finish() = 0;
    virtual State getState() = 0;
    virtual void executeMementoRegistry() = 0;
    virtual void flushMementoRegistry() = 0;
    virtual MementoRegistry * getMementoRegistry() = 0;
    virtual void load(std::string title) = 0;
    virtual ColocateController * getColocateController() = 0;

};

#endif