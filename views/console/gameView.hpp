#ifndef GAME_VIEW
#define GAME_VIEW
#include "../../controllers/controllerVisitor.hpp"


class GameView 
{
  public:
    GameView();
    void interact(ColocateController* colocateController);

  private:
    void printSecretCombination(ColocateController * colocateController);
};
#endif