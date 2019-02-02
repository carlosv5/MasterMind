#ifndef COLOCATE_CONTROLLER
#define COLOCATE_CONTROLLER

#include "../models/game.hpp"
#include "controller.hpp"

class ColocateController : public Controller
{
  public:
    ColocateController(Game *game) : Controller(game)
    {
    };
    void control();
};

#endif