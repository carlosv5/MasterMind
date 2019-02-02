#include <iostream>
#include "string"
#include <assert.h>
#include "localStartController.hpp"


using namespace std;

void LocalStartController::setConfig()
{
    assert(game->getState() == INITIAL);
    game->createSecretCombination();
    game->setState(IN_GAME);
}

void LocalStartController::accept(ControllerVisitor * controllerVisitor){
    controllerVisitor->visit(this);
}
