#include <iostream>
#include "string"
#include "localLogic.hpp"

using namespace std;

LocalLogic::LocalLogic()
{
	game = new Game();
	colocateController = new LocalColocateController(game);
	noGameMenuController = new LocalNoGameMenuController(game);
}

Controller *LocalLogic::getController()
{
	if (game->getState() == INITIAL)
	{
	    return noGameMenuController;
	}
	else if (game->getState() == IN_GAME)
	{
		return colocateController;
	}
	else if (game->getState() == FINAL)
	{
		return noGameMenuController;
	}
	else if (game->getState() == EXIT)
	{
		return NULL;
	}
	return NULL;
}
