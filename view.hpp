#ifndef VIEW
#define VIEW

#include "controllers/controller.hpp"
#include "controllers/controllerVisitor.hpp"

class View : public ControllerVisitor
{
  public:
    virtual void interact(Controller * controller) = 0;
};

#endif