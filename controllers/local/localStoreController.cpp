#include <iostream>
#include "string"
#include <assert.h>
#include "localStoreController.hpp"

using namespace std;

void LocalStoreController::save(std::string title)
{
    assert(game->getState() == IN_GAME);
    storeType->save(title);
}

void LocalStoreController::showFiles(std::vector<std::string>& v){
    storeType->read_directory( v);
}

void LocalStoreController::load(std::string title)
{
    std::string * gameString = storeType->load(title);
    game->toGame(gameString);
}
