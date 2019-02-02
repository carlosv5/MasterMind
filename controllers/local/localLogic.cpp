#include <iostream>
#include "string"
#include "localLogic.hpp"

using namespace std;

LocalLogic::LocalLogic()
{
	game = new Game();
	startController = new LocalStartController(game);
	colocateController = new LocalColocateController(game);
	continueController = new LocalContinueController(game);
}

Controller *LocalLogic::getController()
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
