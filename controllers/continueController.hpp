#ifndef CONTINUE_CONTROLLER
#define CONTINUE_CONTROLLER

#include "../models/game.hpp"
#include "controller.hpp"

class ContinueController : public Controller
{
  public:
    ContinueController(Game *game) : Controller(game){};
    void control();
};

#endif