#include <assert.h>
#include <iostream>
#include "noGameMenuView.hpp"
#include "../../controllers/noGameMenuController.hpp"

using namespace std;

NoGameMenuView::NoGameMenuView()
{
	commandsVector.push_back(new CommandStart());
	commandsVector.push_back(new CommandContinue());
	commandsVector.push_back(new CommandEnd());
};

void NoGameMenuView::interact(NoGameMenuController *noGameMenuController)
{
	std::cout << "-------MENU---------" << std::endl;
	std::cout << "Select one option: " << std::endl;
	State state = noGameMenuController->getState();
	std::vector<Command *> activeCommands;
	for (int i = 0; i < commandsVector.size(); i++)
	{
		if (commandsVector.at(i)->isActive(state))
		{
			activeCommands.push_back(commandsVector.at(i));
		}
	}
	for (int i = 0; i < activeCommands.size(); i++)
	{
		std::cout << i << ". " << activeCommands.at(i)->getTitle() << std::endl;
	}
	int optionChoosen;
	std::cout << ">>";
	cin >> optionChoosen;
	cin.ignore();
	activeCommands.at(optionChoosen)->execute(noGameMenuController);
};
