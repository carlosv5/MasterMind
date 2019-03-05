#include "game.hpp"
#include "gameMemento.hpp"
#include <sstream>

using namespace std;

Game::Game()
{
    secretCombination = new SecretCombination();
    proposedCombinations = new ProposedCombination[MAX_PROPOSED_COMBINATION];
    state = INITIAL;
    turn = 0;
};

SecretCombination *Game::getSecretCombination()
{
    return secretCombination;
}

void Game::createSecretCombination()
{
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

int Game::getCombinationSize()
{
    secretCombination->getSize();
}

ProposedCombination Game::getProposedCombination(int turn)
{
    return proposedCombinations[turn];
}

void Game::setProposedCombination(ProposedCombination proposedCombination, int turn)
{
    proposedCombinations[turn] = proposedCombination;
}

ProposedCombination *Game::getProposedCombinationsArray()
{
    return proposedCombinations;
}

int Game::getMaxNumberOfCombinations()
{
    return MAX_PROPOSED_COMBINATION;
}

void Game::setProposedCombinations(ProposedCombination *proposedCombinations)
{
    this->proposedCombinations = proposedCombinations;
}

void Game::setSecretCombination(SecretCombination *secretCombination)
{
    this->secretCombination = secretCombination;
}

GameMemento *Game::createGameMemento()
{
    return new GameMemento(this, secretCombination, proposedCombinations, state, turn);
}

void Game::restore(GameMemento *gameMemento)
{
    gameMemento->restore();
}

string Game::toString()
{
    string output;
    output += secretCombination->toString("SC");
    output += "\n";
    for (int i = 0; i < turn; i++)
    {
        output += proposedCombinations[i].toString("PC");
        output += "\n";
    }
    return output;
}

void Game::toGame(std::string *gameString)
{
    std::cout << *gameString << std::endl;
    std::istringstream f(*gameString);
    std::string line;
    int counter = 0;
    std::cout << secretCombination->toString("SC ANTES") << std::endl;
    while (std::getline(f, line))
    {
        if (line.substr(0, 2) == "SC")
        {
            std::string combination = line.substr(4, 7);
            std::cout << "combination secret " << combination << std::endl;
            char *cstr = &combination[0u];
            this->secretCombination->setCombination(cstr);
            std::cout << secretCombination->toString("SC BIEN") << std::endl;

        }
         std::cout << secretCombination->toString("SC DESPUES BIEN") << std::endl;
        if (line.substr(0, 2) == "PC")
        {
            std::string combination = line.substr(4, 7);
            std::cout << secretCombination->toString("SC SEGUNDOIF") << std::endl;
            std::cout << "combination propose " << combination << std::endl;
            char *cstr = &combination[0u];
            ProposedCombination *proposedCombination = new ProposedCombination();
            proposedCombination->createCombination();
            proposedCombination->setCombination(cstr);
            proposedCombination->calculateResult(*secretCombination);
            setProposedCombination(*proposedCombination, counter);
            proposedCombinations[counter] = *proposedCombination;

            /*             proposedCombinations[counter].setCombination(cstr);
            proposedCombinations[counter].setInitialResults();
            std::cout << "es" << proposedCombinations[counter].getResults()[0] << std::endl;
            proposedCombinations[counter].calculateResult(*secretCombination); */
            counter++;
        }
    }
    setTurn(counter);
    setState(IN_GAME);
    delete gameString;
}