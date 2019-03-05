#ifndef LOCAL_NO_GAME_MENU_CONTROLLER
#define LOCAL_NO_GAME_MENU_CONTROLLER

#include "../../models/game.hpp"
#include "../controller.hpp"
#include "localStartController.hpp"
#include "localContinueController.hpp"
#include "localStoreController.hpp"
#include "localColocateController.hpp"
#include "../noGameMenuController.hpp"

class LocalNoGameMenuController : public NoGameMenuController, public Controller
{
  public:
    LocalNoGameMenuController(Game *game, MementoRegistry * mementoRegistry) : Controller(game)
    {
      startController = new LocalStartController(game);
      continueController = new LocalContinueController(game);
      storeController = new LocalStoreController(game);
      colocateController = new LocalColocateController(game);
      this->mementoRegistry =  mementoRegistry;
    };
    void accept(ControllerVisitor * controllerVisitor);
    void start();
    void resume();
    void finish();
    State getState();
    void executeMementoRegistry();
    void flushMementoRegistry();
    MementoRegistry * getMementoRegistry();
    void load(std::string);
    ColocateController * getColocateController();

  private:
    LocalStartController * startController;
    LocalContinueController * continueController;
    LocalStoreController * storeController;
    MementoRegistry * mementoRegistry;
    LocalColocateController * colocateController;

};

#endif