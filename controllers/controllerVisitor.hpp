#ifndef CONTROLLER_VISITOR
#define CONTROLLER_VISITOR

class NoGameMenuController;
class GameMenuController;

class ControllerVisitor
{
  public:
    virtual void visit(NoGameMenuController * noGameMenuController) = 0;
    virtual void visit(GameMenuController * gameMenuController) = 0;
};

#endif