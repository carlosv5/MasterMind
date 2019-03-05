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

void LocalStoreController::load()
{
    assert(game->getState() == IN_GAME);
    std::cout << "loading" << std::endl;
}
