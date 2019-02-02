#include <iostream>
#include "string"
#include <assert.h>
#include "colocateController.hpp"

using namespace std;

void ColocateController::control()
{
        assert(game->getState() == IN_GAME);
        game->printSecretCombination();
        game->createCombination();
        game->read();
        game->calculateResult();
        game->print();
        if (game->isWinner())
        {
                game->winMessage();
                game->setState(FINAL);
        }
        else if (game->getTurn() == Game::MAX_PROPOSED_COMBINATION - 1)
        {
                std::cout << "Better luck next time! :) " << std::endl;
                game->printSecretCombination();
                game->setState(FINAL);
        }
        game->incrementTurn();
}