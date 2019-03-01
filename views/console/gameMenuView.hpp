#ifndef GAME_MENU_VIEW
#define GAME_MENU_VIEW
#include <vector>
#include "commands/command.hpp"
#include "../../controllers/controllerVisitor.hpp"
#include "../../controllers/gameMenuController.hpp"
#include "commands/commandColocate.hpp"
#include "commands/commandSurrender.hpp"
#include "commands/commandUndo.hpp"
#include "commands/commandRedo.hpp"
#include "commands/commandSave.hpp"

class GameMenuView 
{
  public:
    GameMenuView();
    void interact(GameMenuController* gameMenuController);

  private:
    std::vector<Command *> commandsVector;
    Game* game;
    MementoRegistry* mementoRegistry;
};

#endif