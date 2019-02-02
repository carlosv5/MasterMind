#ifndef LOCAL_LOGIC
#define LOCAL_LOGIC

#include "localColocateController.hpp"
#include "localNoGameMenuController.hpp"
#include "../../logic.hpp"

class LocalLogic : public Logic
{
  public:
    LocalLogic();
    Controller *getController();

  private:
    Game *game;
    LocalColocateController *colocateController;
    LocalNoGameMenuController * noGameMenuController;
};

#endif