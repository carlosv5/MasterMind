#include <iostream>
#include "string"
#include "logic.hpp"

using namespace std;

Logic::Logic()
{
	game = new Game();
	startController = new StartController(game);
	colocateController = new ColocateController(game);
	continueController = new ContinueController(game);
}

Controller *Logic::getController()
{
	if (game->getState() == INITIAL)
	{
		return startController;
	}
	else if (game->getState() == IN_GAME)
	{
		return colocateController;
	}
	else if (game->getState() == FINAL)
	{
		return continueController;
	}
	else if (game->getState() == EXIT)
	{
		return NULL;
	}
	return NULL;
}
