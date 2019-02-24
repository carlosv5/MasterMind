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
    LocalGameMenuController(Game *game, MementoRegistry * mementoRegistry) : Controller(game)
    {
      colocateController = new LocalColocateController(game);
      continueController = new LocalContinueController(game);
      this->mementoRegistry =  mementoRegistry;
    };
    void accept(ControllerVisitor * controllerVisitor);
    State getState();
    void surrender();
    ColocateController * getColocateController();
    MementoRegistry * getMementoRegistry();
    bool undoable();
    bool redoable();
    void executeMementoRegistry();
    void redo();
    void undo();

  private:
    LocalColocateController * colocateController;
    LocalContinueController * continueController;
    MementoRegistry * mementoRegistry;

};

#endif