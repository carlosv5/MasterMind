#ifndef COMMAND_SURRENDER
#define COMMAND_SURRENDER
#include "command.hpp"
#include <stdlib.h>
#include <iostream>

class CommandSurrender: public Command
{

  public:
    CommandSurrender() : Command("Give up!"){};
    bool isActive(State state);
    void execute(GameMenuController * controller);
};

#endif