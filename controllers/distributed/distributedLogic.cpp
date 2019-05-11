#include <iostream>
#include "string"
#include "distributedLogic.hpp"

using namespace std;

DistributedLogic::DistributedLogic()
{
	game = new Game();
	mementoRegistry = new MementoRegistry(game);
}

Controller *DistributedLogic::getController()
{
	return NULL;
}
