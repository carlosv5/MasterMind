
#include "gameMemento.hpp"
#include <iostream>

GameMemento::GameMemento(Game *game, SecretCombination *secretCombination, ProposedCombination *proposedCombinations, State state, int turn)
{
    this->game = game;
    this->secretCombination = secretCombination;
    this->proposedCombinations = proposedCombinations;
    this->state = state;
    this->turn = turn;
}

void GameMemento::restore()
{
    game->setTurn(this->turn);
    game->setProposedCombinations(this->proposedCombinations);
    game->setSecretCombination(this->secretCombination);
    game->setState(this->state);
}