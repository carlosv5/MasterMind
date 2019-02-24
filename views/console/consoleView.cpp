#include <assert.h>
#include <iostream>
#include "consoleView.hpp"

using namespace std;

ConsoleView::ConsoleView()
{
    noGameMenuView = new NoGameMenuView();
    gameMenuView = new GameMenuView();
};

void ConsoleView::interact(Controller* controller){
    assert(controller != NULL);
    controller->accept(this);
}

void ConsoleView::visit(NoGameMenuController * noGameMenuController){
    noGameMenuView->interact(noGameMenuController);
}    

void ConsoleView::visit(GameMenuController * gameMenuController){
    gameMenuView->interact(gameMenuController);
} 
