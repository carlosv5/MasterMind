#include "commandStart.hpp"
#include <iostream>

bool CommandStart::isActive(State state){
    if(state==INITIAL){
        return true;
    }
    return false;
}