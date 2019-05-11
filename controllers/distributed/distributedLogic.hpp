#ifndef DISTRIBUTED_LOGIC
#define DISTRIBUTED_LOGIC

#include "../../logic.hpp"
#include "../../models/mementoRegistry.hpp"

class DistributedLogic : public Logic
{
  public:
    DistributedLogic();
    Controller *getController();

  private:
    Game *game;
    MementoRegistry * mementoRegistry;
};

#endif