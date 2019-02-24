#ifndef COMMAND_REDO
#define COMMAND_REDO
#include "command.hpp"
#include <stdlib.h>
#include <iostream>
#include "../proposedCombinationView.hpp"

class CommandRedo: public Command
{

  public:
    CommandRedo() : Command("Redo Movement"){};
    bool isActive(State state);
    bool isDoable(MementoRegistry * mementoRegistry);
    void execute(GameMenuController * controller);
    
};

#endif