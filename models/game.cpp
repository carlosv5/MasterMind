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

void Game::setProposedCombinations(ProposedCombination *proposedCombinations){
    this->proposedCombinations = proposedCombinations;
}

void Game::setSecretCombination(SecretCombination *secretCombination){
    this->secretCombination = secretCombination;
}

GameMemento* Game::createGameMemento(){
    std::string string  = toString();
    Game * game = toGame(string);
    std::cout << "---" << std::endl;
    game->getSecretCombination()->toString("PRUEBA");
    return new GameMemento(this, secretCombination, proposedCombinations, state, turn);
}

void Game::restore(GameMemento *gameMemento){
    gameMemento->restore();
}

string Game::toString(){
    string output;
    for(int i = 0; i < turn; i++){
        output += proposedCombinations[i].toString("PC");
    } 
    output += "\n";
    output += secretCombination->toString("SC");

    return output;
}

Game* Game::toGame(std::string gameString){
    std::istringstream f(gameString);
    std::string line;
    setState(IN_GAME);
    int counter = 0;
    while (std::getline(f, line)) {
        std::cout << "first" << std::endl;
        if(line.substr (0,1) == "SC"){
/*             std::string combination = line.substr(4,7);
            char *cstr = &combination[0u];
            SecretCombination *secretCombination = new SecretCombination(); */
/*             secretCombination->setCombination(cstr);
            setSecretCombination(secretCombination); */
        }
        if(line.substr (0,1) == "PC"){
            counter++;
/*             std::string combination = line.substr(4,7);
            char *cstr = &combination[0u]; */
            //ProposedCombination *proposedCombination = new ProposedCombination();
            //proposedCombination->setCombination(cstr);
            //proposedCombinations[counter] = *proposedCombination;
        }
    }
}