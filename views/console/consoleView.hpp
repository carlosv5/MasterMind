#ifndef CONSOLE_VIEW
#define CONSOLE_VIEW
#include "../../controllers/local/localStartController.hpp"
#include "../../controllers/local/localColocateController.hpp"
#include "../../controllers/local/localContinueController.hpp"
#include "startView.hpp"
#include "gameView.hpp"
#include "continueView.hpp"
#include "../../view.hpp"

class ConsoleView : public View
{
  public:
    ConsoleView();
    void interact(Controller* controller);
    void visit(StartController * startController);
    void visit(ColocateController * colocateController);
    void visit(ContinueController * continueController);  

  private:
    StartView * startView;
    GameView * gameView;
    ContinueView * continueView;    
};

#endif