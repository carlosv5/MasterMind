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

 void LocalNoGameMenuController::executeMementoRegistry(){
    mementoRegistry->execute();
}

void LocalNoGameMenuController::flushMementoRegistry(){
    mementoRegistry->flush();
}

MementoRegistry * LocalNoGameMenuController::getMementoRegistry(){
     return mementoRegistry;
}

void LocalNoGameMenuController::load(std::string title){
    storeController->load(title);
}

ColocateController * LocalNoGameMenuController::getColocateController(){
    return colocateController;
}

void LocalNoGameMenuController::showFiles(std::vector<std::string>& v) {
    return storeController->showFiles(v);
}

