#ifndef LOCAL_GAME_MENU_CONTROLLER
#define LOCAL_GAME_MENU_CONTROLLER

#include "../../models/game.hpp"
#include "../controller.hpp"
#include "../gameMenuController.hpp"
#include "localColocateController.hpp"
#include "localContinueController.hpp"
#include "localStoreController.hpp"

class LocalGameMenuController : public GameMenuController, public Controller
{
  public:
    LocalGameMenuController(Game *game, MementoRegistry * mementoRegistry) : Controller(game)
    {
      colocateController = new LocalColocateController(game);
      continueController = new LocalContinueController(game);
      storeController = new LocalStoreController(game);
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
    void save(std::string title);
    void load();

  private:
    LocalColocateController * colocateController;
    LocalContinueController * continueController;
    LocalStoreController * storeController;
    MementoRegistry * mementoRegistry;

};

#endif