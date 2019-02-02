#ifndef MASTERMIND
#define MASTERMIND
#include "secretCombination.hpp"
#include "proposedCombination.hpp"

class MasterMind
{
  public:
    MasterMind();
    void play();
    void print(int);
    SecretCombination *getSecretCombination();
    void winMessage();

  private:
    static const int MAX_PROPOSED_COMBINATION = 10;
    SecretCombination *secretCombination;
    ProposedCombination *proposedCombinations;
};

#endif