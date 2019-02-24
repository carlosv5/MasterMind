#include "commandStart.hpp"
#include <iostream>

bool CommandStart::isActive(State state){
    if(state==INITIAL){
        return true;
    }
    return false;
}

void CommandStart::execute(NoGameMenuController * controller){
    std::cout << "\033[1;31mM A S T E R  M I N D \033[0m" << std::endl;
    controller->start();
}