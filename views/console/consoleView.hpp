#ifndef CONSOLE_VIEW
#define CONSOLE_VIEW
#include "noGameMenuView.hpp"
#include "gameMenuView.hpp"
#include "../../view.hpp"

class ConsoleView : public View
{
  public:
    ConsoleView();
    void interact(Controller* controller);
    void visit(NoGameMenuController * noGameMenuController);
    void visit(GameMenuController * gameMenuController);   

  private:
    NoGameMenuView * noGameMenuView; 
    GameMenuView * gameMenuView;      
};

#endif