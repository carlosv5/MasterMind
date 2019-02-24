#ifndef COMMAND_COLOCATE
#define COMMAND_COLOCATE
#include "command.hpp"
#include <stdlib.h>
#include "../../../controllers/colocateController.hpp"
#include "../secretCombinationView.hpp"
#include "../proposedCombinationView.hpp"
#include <iostream>

class CommandColocate: public Command
{

  public:
    CommandColocate() : Command("Try a combination"){};
    bool isActive(State state);
    void execute(GameMenuController * controller);

  private:
    void printSecretCombination(ColocateController * ColocateController);
    
};

#endif