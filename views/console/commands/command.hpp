#ifndef COMMAND
#define COMMAND
#include <stdlib.h>
#include <iostream>
#include "../../../models/game.hpp"
#include "../../../controllers/controller.hpp"
#include "../../../controllers/noGameMenuController.hpp"
#include "../../../models/state.hpp"

class Command
{
  protected:
    Command(std::string title);

  public:
    virtual std::string getTitle();
    virtual bool isActive(State state) = 0;
    virtual void execute(NoGameMenuController * controller) {};
    //virtual void execute(NoGameMenuController * controller) {};

  private:
    std::string title;
};

#endif