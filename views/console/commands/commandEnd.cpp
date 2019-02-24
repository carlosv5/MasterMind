#include "commandEnd.hpp"
#include <iostream>

bool CommandEnd::isActive(State state){
    if(state==FINAL){
        return true;
    }
    return false;
}

void CommandEnd::execute(NoGameMenuController * controller){
    std::cout << "See you soon! :D" << std::endl;
    controller->finish();
}