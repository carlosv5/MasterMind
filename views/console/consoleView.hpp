#ifndef CONSOLE_VIEW
#define CONSOLE_VIEW
#include "startView.hpp"
#include "gameView.hpp"
#include "continueView.hpp"
#include "noGameMenuView.hpp"
#include "../../view.hpp"

class ConsoleView : public View
{
  public:
    ConsoleView();
    void interact(Controller* controller);
    void visit(StartController * startController);
    void visit(ColocateController * colocateController);
    void visit(ContinueController * continueController);  
    void visit(NoGameMenuController * noGameMenuController);  

  private:
    StartView * startView;
    GameView * gameView;
    ContinueView * continueView; 
    NoGameMenuView * noGameMenuView;       
};

#endif