#include "commandContinue.hpp"
#include <iostream>

using namespace std;

bool CommandContinue::isActive(State state){
    if(state==FINAL){
        return true;
    }
    return false;
}

void CommandContinue::execute(NoGameMenuController * controller){
    controller->resume();       
}