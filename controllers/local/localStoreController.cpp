#include <iostream>
#include "string"
#include <assert.h>
#include "localStoreController.hpp"


using namespace std;

void LocalStoreController::save(std::string title)
{
    assert(game->getState() == IN_GAME);
    std::cout << "saving" << title << std::endl;
    storeType->save(title);
}

void LocalStoreController::load(std::string title)
{
    assert(game->getState() != IN_GAME);
    std::string * gameString = storeType->load(title);
    std::cout << "loading" << std::endl;
    game->toGame(gameString);
    std::cout << "loading" << std::endl;
}
