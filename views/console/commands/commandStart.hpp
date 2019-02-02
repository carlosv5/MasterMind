#ifndef COMMAND_START
#define COMMAND_START
#include "command.hpp"
#include <stdlib.h>
#include <iostream>

class CommandStart: public Command
{

  public:
    CommandStart() : Command("Start game"){};
    bool isActive(State state);
    
};

#endif