#ifndef GAME
#define GAME
#include "proposedCombination.hpp"
#include "state.hpp"
#include <iostream>
#include "string"

class GameMemento;

class Game
{
  public:
    Game();
    SecretCombination * getSecretCombination();
    int getCombinationSize();
    ProposedCombination getProposedCombination(int turn);
    void setProposedCombination(ProposedCombination proposedCombination, int turn);
    ProposedCombination * getProposedCombinationsArray();
    int getMaxNumberOfCombinations();
    bool isThereWinner();
    State getState();
    void createSecretCombination();
    void createCombination();
    void calculateResult();
    void setState(State state);
    void incrementTurn();
    int getTurn();
    void setTurn(int turn);
    void clear();
    void setProposedCombinations(ProposedCombination *proposedCombinations);
    void setSecretCombination(SecretCombination *secretCombination);
    GameMemento* createGameMemento();
    void restore(GameMemento *gameMemento);
    std::string toString();
    void toGame(std::string * );

  private:
    SecretCombination *secretCombination;
    ProposedCombination *proposedCombinations;
    State state;
    int turn;
    static const int MAX_PROPOSED_COMBINATION = 2;

};

#endif