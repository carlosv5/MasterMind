#include <iostream>
#include <cstdlib>
#include "secretCombination.hpp"

SecretCombination::SecretCombination()
{
    combination = new char[SIZE_COMBINATION];
    char *arrayColors = new char[Color::numberOfColors];
    Color::values(arrayColors);

    srand(time(0));
    for (int i = 0; i < SIZE_COMBINATION; i++)
    {
        combination[i] = arrayColors[Color::randomNum()];
    }

    delete arrayColors;
}

