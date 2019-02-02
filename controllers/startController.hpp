#ifndef START_CONTROLLER
#define START_CONTROLLER

#include "../models/game.hpp"
#include "controller.hpp"

class StartController : public Controller
{
  public:
    StartController(Game *game) : Controller(game)
    {
    };
    void control();
};

#endif