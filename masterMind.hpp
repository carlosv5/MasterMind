#ifndef MASTERMIND
#define MASTERMIND
#include <memory>
#include "controllers/logic.hpp"

class MasterMind
{
  public:
    MasterMind();
    void play();

  private:
    Logic *logic;
};

#endif