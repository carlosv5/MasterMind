#ifndef NO_GAME_MENU_VIEW
#define NO_GAME_MENU_VIEW
#include <vector>
#include "commands/command.hpp"
#include "commands/commandStart.hpp"
#include "commands/commandContinue.hpp"
#include "commands/commandEnd.hpp"
#include "../../controllers/controllerVisitor.hpp"


class NoGameMenuView 
{
  public:
    NoGameMenuView();
    void interact(NoGameMenuController* noGameMenuController);

  private:
    std::vector<Command *> commandsVector;
};

#endif