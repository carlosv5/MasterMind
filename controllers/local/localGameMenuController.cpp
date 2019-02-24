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

