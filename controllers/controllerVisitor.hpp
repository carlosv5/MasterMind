#ifndef CONTROLLER_VISITOR
#define CONTROLLER_VISITOR


class StartController;
class ColocateController; 
class ContinueController;
class NoGameMenuController;

class ControllerVisitor
{
  public:
    virtual void visit(StartController * startController) = 0;
    virtual void visit(ColocateController *  colocateController) = 0;
    virtual void visit(ContinueController * continueController) = 0;
    virtual void visit(NoGameMenuController * noGameMenuController) = 0;
};

#endif