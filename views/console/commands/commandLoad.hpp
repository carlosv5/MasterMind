#ifndef COMMAND_LOAD
#define COMMAND_LOAD
#include "command.hpp"
#include <stdlib.h>
#include <iostream>
#include "../proposedCombinationView.hpp"

class CommandLoad: public Command
{

  public:
    CommandLoad() : Command("Load game"){};
    bool isActive(State state);
    void execute(NoGameMenuController * controller);
};

#endif