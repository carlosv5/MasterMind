#ifndef LOCAL_START_CONTROLLER
#define LOCAL_START_CONTROLLER

#include "../../models/game.hpp"
#include "../controller.hpp"
#include "../startController.hpp"


class LocalStartController : public StartController, public Controller
{
  public:
    LocalStartController(Game *game) : Controller(game){
      this->game = game;
    }
    void accept(ControllerVisitor * controllerVisitor);
    void setConfig();
};

#endif