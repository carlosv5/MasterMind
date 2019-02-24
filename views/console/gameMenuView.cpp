#include <assert.h>
#include <iostream>
#include "gameMenuView.hpp"

using namespace std;

GameMenuView::GameMenuView(){
	commandsVector.push_back(new CommandColocate());
};

void GameMenuView::interact(GameMenuController * gameMenuController){
	std::cout << "-------MENU---------" << std::endl;
    std::cout << "Select one option: " << std::endl;
	State state = gameMenuController->getState();
	std::vector<Command * > activeCommands;
	for(int i=0; i<commandsVector.size(); i++){
        if(commandsVector.at(i)->isActive(state)){
            activeCommands.push_back(commandsVector.at(i));
        }
    }
	for(int i=0; i<activeCommands.size(); i++){
		std::cout << i << ". " << activeCommands.at(i)->getTitle() << std::endl;
	}
	int optionChoosen;
	std::cout << ">>";
	cin >> optionChoosen;
	cin.ignore();
	activeCommands.at(optionChoosen)->execute(gameMenuController);
};

