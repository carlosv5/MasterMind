#include "color.hpp"
#include <iostream>
#include <cstdlib>

Color::Color()
{
}

int Color::randomNum()
{
    int num = (rand() % numberOfColors);
    return num;
}

void Color::values(char *colorArray)
{
    colorArray[0] = Color::black;
    colorArray[1] = Color::white;
    colorArray[2] = Color::red;
    colorArray[3] = Color::orange;
    colorArray[4] = Color::green;
    colorArray[5] = Color::yellow;
}