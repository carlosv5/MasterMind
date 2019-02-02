#ifndef PROPOSED_COMBINATION_VIEW
#define PROPOSED_COMBINATION_VIEW
#include "../../controllers/controllerVisitor.hpp"
#include "../../models/proposedCombination.hpp"


class ProposedCombinationView 
{
  public:
    ProposedCombinationView();
    ProposedCombination readProposedCombination(ProposedCombination proposedCombination, int SIZE_COMBINATION);
    void showColorOptions();
    void printResults(ProposedCombination * proposedCombinations, int turn);


  private:
    static const int INDEX_BLACK_RESULT = 0;
    static const int INDEX_WHITE_RESULT = 1;

};

#endif