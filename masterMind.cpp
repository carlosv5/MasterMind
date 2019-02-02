#include <iostream>
#include "string"
#include "masterMind.hpp"
#include "controllers/controller.hpp"

using namespace std;

MasterMind::MasterMind()
{
	logic = new Logic();
};

void MasterMind::play()
{
	Controller *controller;
	do
	{
		controller = logic->getController();
		if (controller != NULL)
		{
			controller->control();
		}
	} while (controller != NULL);
};

int main()
{
	MasterMind().play();
}
