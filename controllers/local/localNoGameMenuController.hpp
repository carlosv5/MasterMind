#ifndef LOCAL_NO_GAME_MENU_CONTROLLER
#define LOCAL_NO_GAME_MENU_CONTROLLER

#include "../../models/game.hpp"
#include "../controller.hpp"
#include "localStartController.hpp"
#include "localContinueController.hpp"
#include "../noGameMenuController.hpp"

class LocalNoGameMenuController : public NoGameMenuController, public Controller
{
  public:
    LocalNoGameMenuController(Game *game) : Controller(game)
    {
      startController = new LocalStartController(game);
      continueController = new LocalContinueController(game);
    };
    void accept(ControllerVisitor * controllerVisitor);
    void start();
    void resume();
    void finish();
    State getState();

  private:
    LocalStartController * startController;
    LocalContinueController * continueController;

};

#endif