#include <iostream>
#include "string"
#include "masterMind.hpp"
#include "controllers/local/localLogic.hpp"
#include "views/console/consoleView.hpp"

using namespace std;

MasterMind::MasterMind(View * view, Logic * logic)
{
	this->view = view;
	this->logic = logic;
};

void MasterMind::play()
{
	Controller *controller;
	do
	{
		controller = logic->getController();
		if (controller != NULL)
		{
			view->interact(controller);
		}
	} while (controller != NULL);
};

int main()
{
	MasterMind(new ConsoleView(), new LocalLogic()).play();
}
