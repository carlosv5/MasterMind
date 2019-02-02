#include "../headers/secretCombination.hpp"
#include <iostream>
#include <cstdlib>

#include "../headers/color.hpp"

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

void SecretCombination::print()
{
    std::cout << "The secret combination was: ";
    for (int i = 0; i < SIZE_COMBINATION; i++)
    {
        std::cout << combination[i] << " ";
    }
    std::cout << std::endl;
}

char *SecretCombination::getCombination()
{
    return combination;
}
