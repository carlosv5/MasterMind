#include "commandSave.hpp"
#include <iostream>

bool CommandSave::isActive(State state){
    if(state==IN_GAME){
        return true;
    }
    return false;
}

void CommandSave::execute(GameMenuController * controller){
    std::cout << "-> What title do you want for this game?" << std::endl;
    std::string gameName;
    getline(std::cin, gameName);
    controller->getMementoRegistry()->flush();
    controller->save(gameName);
    controller->surrender();
}