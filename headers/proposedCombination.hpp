#ifndef PROPOSED_COMBINATION
#define PROPOSED_COMBINATION

#include "combination.hpp"
#include "secretCombination.hpp"

class ProposedCombination : public Combination
{

  public:
    void print();
    void calculateResult(SecretCombination);
    bool isWinner();
    char *read();
    ProposedCombination();
    void createCombination();
    void showColorOptions();

  private:
    int *results;
    static const int SIZE_RESULTS = 2;
    static const int INDEX_BLACK_RESULT = 0;
    static const int INDEX_WHITE_RESULT = 1;
};

#endif