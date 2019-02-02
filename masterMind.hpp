#ifndef MASTERMIND
#define MASTERMIND
#include "controllers/controller.hpp"
#include "logic.hpp"
#include "view.hpp"



class MasterMind
{
  public:
    MasterMind(View * view, Logic * logic);
    void play();

  private:
    Logic *logic;
    View *view;
};

#endif