#ifndef GAME
#define GAME
#include "secretCombination.hpp"
#include "proposedCombination.hpp"
#include "state.hpp"

class Game
{
  public:
    Game();
    ~Game();
    State getState();
    void printSecretCombination();
    void createSecretCombination();
    void print();
    void winMessage();
    void createCombination();
    void read();
    void calculateResult();
    bool isWinner();
    void setState(State state);
    void incrementTurn();
    int getTurn();
    void clear();
    void setTurn(int turn);
    static const int MAX_PROPOSED_COMBINATION = 10;

  private:
    SecretCombination *secretCombination;
    ProposedCombination *proposedCombinations;
    State state;
    int turn;
};

#endif