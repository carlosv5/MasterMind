#include "commandSurrender.hpp"
#include <iostream>

bool CommandSurrender::isActive(State state){
    if(state==IN_GAME){
        return true;
    }
    return false;
}

void CommandSurrender::execute(GameMenuController * controller){
    std::cout << "Better luck next time! :D" << std::endl;
    controller->getMementoRegistry()->execute();
    controller->surrender();
}