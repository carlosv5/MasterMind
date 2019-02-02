#include <iostream>
#include "string"
#include <assert.h>
#include "localNoGameMenuController.hpp"

using namespace std;

void LocalNoGameMenuController::accept(ControllerVisitor * controllerVisitor){
    controllerVisitor->visit(this);
}

void LocalNoGameMenuController::start(){
    startController->setConfig();
}

void LocalNoGameMenuController::resume(){
    continueController->resume();
}

void LocalNoGameMenuController::finish(){
    continueController->finish();
}

State LocalNoGameMenuController::getState(){
         return game->getState();
 }

 void LocalNoGameMenuController::execute(std::string title){
    if(title == "Start game"){
        start();
    } else if (title == "Continue game") {
        resume();
    } else {
        finish();
    }
}

