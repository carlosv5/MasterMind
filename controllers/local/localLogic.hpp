#ifndef LOCAL_LOGIC
#define LOCAL_LOGIC

#include "localGameMenuController.hpp"
#include "localNoGameMenuController.hpp"
#include "../../logic.hpp"

class LocalLogic : public Logic
{
  public:
    LocalLogic();
    Controller *getController();

  private:
    Game *game;
    LocalNoGameMenuController * noGameMenuController;
    LocalGameMenuController * gameMenuController;
};

#endif