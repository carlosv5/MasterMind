#include <iostream>
#include "string"
#include <assert.h>
#include "localContinueController.hpp"

using namespace std;

void LocalContinueController::resume()
{
	assert(game->getState() == FINAL || game->getState() == IN_GAME);
	game->clear();
	game->setState(INITIAL);
}

void LocalContinueController::finish()
{
	game->setState(EXIT);
}