#ifndef MASTERMIND_STANDALONE
#define MASTERMIND_STANDALONE
#include "masterMind.hpp"
#include "views/console/consoleView.hpp"
#include "controllers/local/localLogic.hpp"

class MasterMindStandAlone : public MasterMind
{
  public:
    MasterMindStandAlone(View* view, Logic * logic) : MasterMind(view, logic){}

};

#endif