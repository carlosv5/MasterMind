#ifndef GAME_MEMENTO
#define GAME_MEMENTO
#include "mementoInterface.hpp"

  class GameMemento : public MementoInterface
  {
    public:
    GameMemento(Game *game, SecretCombination *secretCombination, ProposedCombination *proposedCombinations, State state, int turn);
    void restore();

    private:
    Game *game;    
    SecretCombination *secretCombination;
    ProposedCombination *proposedCombinations;
    State state;
    int turn;
  };

#endif