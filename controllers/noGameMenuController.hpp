#ifndef NO_GAME_MENU_CONTROLLER
#define NO_GAME_MENU_CONTROLLER

#include "../models/game.hpp"
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

};

#endif