#ifndef LOCAL_GAME_MENU_CONTROLLER
#define LOCAL_GAME_MENU_CONTROLLER

#include "../../models/game.hpp"
#include "../controller.hpp"
#include "../gameMenuController.hpp"
#include "localColocateController.hpp"
#include "localContinueController.hpp"

class LocalGameMenuController : public GameMenuController, public Controller
{
  public:
    LocalGameMenuController(Game *game) : Controller(game)
    {
      colocateController = new LocalColocateController(game);
      continueController = new LocalContinueController(game);
    };
    void accept(ControllerVisitor * controllerVisitor);
    State getState();
    void surrender();
    ColocateController * getColocateController();

  private:
    LocalColocateController * colocateController;
    LocalContinueController * continueController;

};

#endif