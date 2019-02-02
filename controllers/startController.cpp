#include <iostream>
#include "string"
#include <assert.h>
#include "startController.hpp"

using namespace std;

void StartController::control()
{
    assert(game->getState() == INITIAL);
    game->createSecretCombination();
    std::cout << "\033[1;31mM A S T E R  M I N D \033[0m\n"
              << std::endl;
    game->setState(IN_GAME);
}