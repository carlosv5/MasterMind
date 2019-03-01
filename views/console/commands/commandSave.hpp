#ifndef COMMAND_SAVE
#define COMMAND_SAVE
#include "command.hpp"
#include <stdlib.h>
#include <iostream>

class CommandSave: public Command
{

  public:
    CommandSave() : Command("Save game"){};
    bool isActive(State state);
    void execute(GameMenuController * controller);
};

#endif