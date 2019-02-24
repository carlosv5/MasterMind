#ifndef LOCAL_GAME_MENU_CONTROLLER
#define LOCAL_GAME_MENU_CONTROLLER

#include "../../models/game.hpp"
#include "../controller.hpp"
#include "../gameMenuController.hpp"
#include "localColocateController.hpp"
#include <vector>

class LocalGameMenuController : public GameMenuController, public Controller
{
  public:
    LocalGameMenuController(Game *game) : Controller(game)
    {
      colocateController = new LocalColocateController(game);
      compositeControllersVector.push_back(colocateController);
    };
    void accept(ControllerVisitor * controllerVisitor);
    State getState();
    ColocateController * getColocateController();

  private:
    LocalColocateController * colocateController;
    std::vector<Controller *> compositeControllersVector;

};

#endif