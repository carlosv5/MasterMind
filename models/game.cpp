#include <iostream>
#include "string"
#include "game.hpp"

using namespace std;

Game::Game()
{
    proposedCombinations = new ProposedCombination[MAX_PROPOSED_COMBINATION];
    state = INITIAL;
    turn = 0;
};

Game::~Game(){
    delete secretCombination;
            std::cout << "deleting2" << std::endl;
    for(int i = 0; i<getTurn();i++){
                    std::cout << "deleting3" << std::endl;
        proposedCombinations[i].~ProposedCombination();
    }
    delete proposedCombinations;
    
}

void Game::print()
{
    std::cout << "Results:" << std::endl;
    for (int i = 0; i < getTurn() + 1; i++)
    {
        proposedCombinations[i].print();
    }
}

void Game::printSecretCombination()
{
    secretCombination->print();
}

void Game::createSecretCombination(){
    secretCombination = new SecretCombination();
}

void Game::winMessage()
{
    std::cout << "You win!! :D" << std::endl;
}

State Game::getState()
{
    return state;
}

bool Game::isWinner()
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
void Game::read()
{
    proposedCombinations[getTurn()].read();
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
    setTurn(0);
}
