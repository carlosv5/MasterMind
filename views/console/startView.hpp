#ifndef START_VIEW
#define START_VIEW
#include "../../controllers/controllerVisitor.hpp"


class StartView 
{
  public:
    StartView();
    void interact(StartController* startController);
};

#endif