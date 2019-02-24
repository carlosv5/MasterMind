#include <iostream>
#include "string"
#include <assert.h>
#include "localColocateController.hpp"

using namespace std;

void LocalColocateController::createCombination(){
        assert(game->getState() == IN_GAME);
        game->createCombination();
}

void LocalColocateController::calculateResult(){
        game->calculateResult();
}

SecretCombination * LocalColocateController::getSecretCombination(){
        game->getSecretCombination();
}

int LocalColocateController::getCombinationSize(){
        return (game->getCombinationSize());
}

ProposedCombination LocalColocateController::getProposedCombination(){
        return game->getProposedCombination(game->getTurn());
}

void LocalColocateController::setProposedCombination(ProposedCombination proposedCombination){
        game->setProposedCombination(proposedCombination, game->getTurn());
}

ProposedCombination * LocalColocateController::getProposedCombinationsArray(){
        return game->getProposedCombinationsArray();
}
int LocalColocateController::getTurn(){
        return game->getTurn();
}

void LocalColocateController::incrementTurn(){
        game->incrementTurn();
}

bool LocalColocateController::isThereWinner(){
        return game->isThereWinner();
}
 int LocalColocateController::getMaxNumberOfCombinations(){
         return game->getMaxNumberOfCombinations();
 }

 void LocalColocateController::setState(State state){
         game->setState(state);
 }

