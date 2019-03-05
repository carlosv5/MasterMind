#include "commandLoad.hpp"
#include <iostream>

bool CommandLoad::isActive(State state){
    if(state!=IN_GAME){
        return true;
    }
    return false;
}

void CommandLoad::execute(NoGameMenuController * controller){
    std::cout << "-> What title do you want for this game?" << std::endl;
    std::string gameName;
    getline(std::cin, gameName);
    controller->getMementoRegistry()->flush();
    controller->load(gameName);
}