#include <iostream>
#include "string"
#include <assert.h>
#include "localGameMenuController.hpp"

using namespace std;

void LocalGameMenuController::accept(ControllerVisitor * controllerVisitor){
    controllerVisitor->visit(this);
}

State LocalGameMenuController::getState(){
         return game->getState();
}

ColocateController * LocalGameMenuController::getColocateController(){
    return colocateController;
}

void LocalGameMenuController::surrender(){
    continueController->resume();
}

 MementoRegistry * LocalGameMenuController::getMementoRegistry(){
     return mementoRegistry;
}

bool LocalGameMenuController::undoable(){
    return mementoRegistry->undoable();
}

bool LocalGameMenuController::redoable(){
    return mementoRegistry->redoable();
}

void LocalGameMenuController::executeMementoRegistry(){
    mementoRegistry->execute();
}

void LocalGameMenuController::redo(){
    mementoRegistry->redo(game);
}

void LocalGameMenuController::undo(){
}

void LocalGameMenuController::save(std::string title){
    storeController->save(title);
}

 

