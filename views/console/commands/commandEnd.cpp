#include "commandEnd.hpp"
#include <iostream>

bool CommandEnd::isActive(State state){
    if(state==FINAL){
        return true;
    }
    return false;
}