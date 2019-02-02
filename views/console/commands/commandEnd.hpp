#ifndef COMMAND_END
#define COMMAND_END
#include "command.hpp"
#include <stdlib.h>
#include <iostream>

class CommandEnd: public Command
{

  public:
    CommandEnd() : Command("End game"){};
    bool isActive(State state);
    
};

#endif