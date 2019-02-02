#include <assert.h>
#include <iostream>
#include "consoleView.hpp"

using namespace std;

ConsoleView::ConsoleView()
{
    startView = new StartView();
    gameView = new GameView();
    continueView = new ContinueView();
};

void ConsoleView::interact(Controller* controller){
    assert(controller != NULL);
    controller->accept(this);
};

void ConsoleView::visit(StartController * startController) {
    startView->interact(startController);
};

void ConsoleView::visit(ColocateController  * colocateController) {
    gameView->interact(colocateController);
};

void ConsoleView::visit(ContinueController * continueController){
    continueView->interact(continueController);
}    
