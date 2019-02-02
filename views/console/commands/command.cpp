#include "command.hpp"
#include <iostream>

Command::Command(std::string title)
{
    this->title = title;
}

std::string Command::getTitle(){
    return this->title;
}