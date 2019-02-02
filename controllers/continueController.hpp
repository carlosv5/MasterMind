#ifndef CONTINUE_CONTROLLER
#define CONTINUE_CONTROLLER

#include "../models/game.hpp"

class ContinueController
{
  public:
    virtual void resume() = 0;
    virtual void finish() = 0;

};

#endif