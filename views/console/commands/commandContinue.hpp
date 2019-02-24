#ifndef COMMAND_CONTINUE
#define COMMAND_CONTINUE
#include "command.hpp"
#include <stdlib.h>
#include <iostream>

class CommandContinue: public Command
{

  public:
    CommandContinue() : Command("Continue game"){};
    bool isActive(State state);
    void execute(NoGameMenuController * controller);
    
};

#endif