#include <iostream>
#include "string"
#include <assert.h>
#include "continueController.hpp"

using namespace std;

void ContinueController::control()
{
	assert(game->getState() == FINAL);
	char answer;
	do
	{
		std::cout << "Do you want to play again? (y/n)" << std::endl;
		cin >> answer;
		cin.ignore();
	} while (answer != 'y' && answer != 'Y' && answer != 'N' && answer != 'n');
	if (answer == 'y' or answer == 'Y')
	{
		game->clear();
		game->setState(INITIAL);
	}
	else
	{
		game->setState(EXIT);
	}
}
