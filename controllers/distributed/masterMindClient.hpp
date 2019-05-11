#ifndef MASTERMIND_CLIENT
#define MASTERMIND_CLIENT
#include "../../masterMind.hpp"
#include "../../views/console/consoleView.hpp"
#include "distributedLogic.hpp"

class MasterMindClient : public MasterMind
{
  public:
    MasterMindClient(View* view, Logic * logic) : MasterMind(view, logic){}

};

#endif