#ifndef COMMAND_UNDO
#define COMMAND_UNDO
#include "command.hpp"
#include <stdlib.h>
#include <iostream>
#include "../proposedCombinationView.hpp"

class CommandUndo: public Command
{

  public:
    CommandUndo() : Command("Undo Movement"){};
    bool isActive(State state);
    bool isDoable(MementoRegistry * mementoRegistry);
    void execute(GameMenuController * controller);
    
};

#endif