#ifndef LOCAL_LOGIC
#define LOCAL_LOGIC

#include "localStartController.hpp"
#include "localColocateController.hpp"
#include "localContinueController.hpp"
#include "../../logic.hpp"

class LocalLogic : public Logic
{
  public:
    LocalLogic();
    Controller *getController();

  private:
    Game *game;
    LocalStartController *startController;
    LocalColocateController *colocateController;
    LocalContinueController *continueController;
};

#endif