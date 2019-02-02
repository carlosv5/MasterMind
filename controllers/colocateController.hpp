#ifndef COLOCATE_CONTROLLER
#define COLOCATE_CONTROLLER

#include "../models/game.hpp"

class ColocateController
{
  public:
    virtual SecretCombination * getSecretCombination() = 0;
    virtual int getCombinationSize() = 0;
    virtual void createCombination() = 0;
    virtual ProposedCombination getProposedCombination() = 0;
    virtual void setProposedCombination(ProposedCombination proposedCombination) = 0;
    virtual void calculateResult() = 0;
    virtual ProposedCombination * getProposedCombinationsArray() = 0;
    virtual int getTurn() = 0;
    virtual void incrementTurn() = 0;
    virtual bool isThereWinner() = 0;
    virtual int getMaxNumberOfCombinations() = 0;
    virtual void setState(State state) = 0;

};

#endif