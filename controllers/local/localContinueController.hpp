#ifndef LOCAL_CONTINUE_CONTROLLER
#define LOCAL_CONTINUE_CONTROLLER

#include "../../models/game.hpp"
#include "../controller.hpp"
#include "../continueController.hpp"

class LocalContinueController : public ContinueController, public Controller
{
  public:
    LocalContinueController(Game *game) : Controller(game){};
    void resume();
    void finish();

};

#endif