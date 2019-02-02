#ifndef SECRET_COMBINATION
#define SECRET_COMBINATION

#include "combination.hpp"
#include "color.hpp"

class SecretCombination : public Combination
{

  public:
    void print();
    SecretCombination();
    char *getCombination();
};

#endif
