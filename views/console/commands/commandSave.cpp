#include "commandSave.hpp"
#include <iostream>

bool CommandSave::isActive(State state){
    if(state==IN_GAME){
        return true;
    }
    return false;
}

void CommandSave::execute(GameMenuController * controller){
    std::cout << "Tell me a name for this game" << std::endl;
    std::string gameName;
    getline(std::cin, gameName);
/*     controller->getMementoRegistry()->execute();
    controller->surrender(); */
}