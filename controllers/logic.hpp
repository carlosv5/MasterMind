#ifndef LOGIC
#define LOGIC

#include "startController.hpp"
#include "colocateController.hpp"
#include "continueController.hpp"
#include "controller.hpp"
#include "../models/state.hpp"

class Logic
{
  public:
    Logic();
    Controller *getController();

  private:
    Game *game;
    StartController *startController;
    ColocateController *colocateController;
    ContinueController *continueController;
};

#endif