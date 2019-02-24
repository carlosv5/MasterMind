#ifndef GAME_MENU_VIEW
#define GAME_MENU_VIEW
#include <vector>
#include "commands/command.hpp"
#include "../../controllers/controllerVisitor.hpp"
#include "../../controllers/gameMenuController.hpp"
#include "commands/commandColocate.hpp"

class GameMenuView 
{
  public:
    GameMenuView();
    void interact(GameMenuController* gameMenuController);

  private:
    std::vector<Command *> commandsVector;
};

#endif