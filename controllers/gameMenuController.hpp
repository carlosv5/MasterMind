#ifndef GAME_MENU_CONTROLLER
#define GAME_MENU_CONTROLLER

#include "../models/game.hpp"
#include "colocateController.hpp"
#include "../models/mementoRegistry.hpp"

class GameMenuController
{
  public:
    virtual State getState() = 0;
    virtual ColocateController * getColocateController() = 0;
    virtual MementoRegistry * getMementoRegistry() = 0;
    virtual void surrender() = 0;
    virtual bool undoable() = 0;
    virtual bool redoable() = 0;
    virtual void executeMementoRegistry() = 0;
    virtual void redo() = 0;
    virtual void undo() = 0;
    virtual void save(std::string title) = 0;

};

#endif