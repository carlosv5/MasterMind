#include "commandContinue.hpp"
#include <iostream>

bool CommandContinue::isActive(State state){
    if(state==FINAL){
        return true;
    }
    return false;
}