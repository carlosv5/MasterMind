#ifndef CONTINUE_VIEW
#define CONTINUE_VIEW
#include "../../controllers/controllerVisitor.hpp"


class ContinueView 
{
  public:
    ContinueView();
    void interact(ContinueController* continueController);
};

#endif