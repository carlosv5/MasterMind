#include <iostream>
#include "string"
#include "game.hpp"

using namespace std;

Game::Game()
{
    secretCombination = new SecretCombination();
    proposedCombinations = new ProposedCombination[MAX_PROPOSED_COMBINATION];
    state = INITIAL;
    turn = 0;
};

SecretCombination * Game::getSecretCombination()
{
    return secretCombination;
}

void Game::createSecretCombination(){
    secretCombination = new SecretCombination();
}

State Game::getState()
{
    return state;
}

bool Game::isThereWinner()
{
    proposedCombinations[getTurn()].isWinner();
}

void Game::setState(State state)
{
    this->state = state;
}

void Game::createCombination()
{
    proposedCombinations[getTurn()].createCombination();
}

void Game::calculateResult()
{
    proposedCombinations[getTurn()].calculateResult(*secretCombination);
}

void Game::incrementTurn()
{
    turn++;
}

int Game::getTurn()
{
    return turn;
}

void Game::setTurn(int turn)
{
    this->turn = turn;
}

void Game::clear()
{
    delete secretCombination;
    this->setTurn(0);
}

int Game::getCombinationSize(){
    secretCombination->getSize();
}

ProposedCombination Game::getProposedCombination(int turn){
    return proposedCombinations[turn];
}

void Game::setProposedCombination(ProposedCombination proposedCombination, int turn){
    proposedCombinations[turn] = proposedCombination;
}

ProposedCombination * Game::getProposedCombinationsArray(){
    return proposedCombinations;
}

int Game::getMaxNumberOfCombinations(){
    return MAX_PROPOSED_COMBINATION;
}