#include "../headers/proposedCombination.hpp"
#include <iostream>
#include <cstdlib>
#include <set>
#include <assert.h>

#include "../headers/color.hpp"

ProposedCombination::ProposedCombination()
{
}

void ProposedCombination::createCombination()
{
    combination = new char[SIZE_COMBINATION];
    results = new int[SIZE_RESULTS];
}

void ProposedCombination::calculateResult(SecretCombination secretCombination)
{
    int black = results[INDEX_BLACK_RESULT];
    int white = results[INDEX_WHITE_RESULT];

    std::set<char> setColors;
    char *copyOfCombination = new char[SIZE_COMBINATION];
    for (int i = 0; i < SIZE_COMBINATION; i++)
    {
        copyOfCombination[i] = combination[i];
    }
    for (int i = 0; i < SIZE_COMBINATION; i++)
    {
        if (secretCombination.getCombination()[i] == copyOfCombination[i])
        {
            black++;
            copyOfCombination[i] = (char)NULL;
        }
        else
        {
            setColors.insert(secretCombination.getCombination()[i]);
        }
    }
    for (int i = 0; i < SIZE_COMBINATION; i++)
    {
        if (setColors.count(copyOfCombination[i]) > 0)
        {
            white++;
        }
    }
    delete copyOfCombination;
    results[INDEX_BLACK_RESULT] = black;
    results[INDEX_WHITE_RESULT] = white;
}
bool ProposedCombination::isWinner()
{
    if (results[INDEX_BLACK_RESULT] == SIZE_COMBINATION)
    {
        return true;
    }
    return false;
}
char *ProposedCombination::read()
{
    showColorOptions();
    std::cout << "--Insert your colors (XXXX)--" << std::endl;
    std::string combinationString;
    getline(std::cin, combinationString);

    for (int i = 0; i < SIZE_COMBINATION; i++)
    {
        char *colorArray = new char[Color::numberOfColors];
        Color::values(colorArray);
        bool isAColor = false;
        for (int j = 0; j < Color::numberOfColors; j++)
        {
            if (combinationString[i] == colorArray[j])
            {
                isAColor = true;
            }
        }
        assert(isAColor);
        char colorToInsert = combinationString[i];
        combination[i] = colorToInsert;
    }
    return combination;
}

void ProposedCombination::showColorOptions()
{
    std::cout << "You can use this colors:" << std::endl;
    char *colorArray = new char[Color::numberOfColors];
    Color::values(colorArray);
    for (int i = 0; i < Color::numberOfColors; i++)
    {
        std::cout << colorArray[i] << " ";
    }
    std::cout << std::endl;
    delete (colorArray);
}

void ProposedCombination::print()
{
    for (int i = 0; i < SIZE_COMBINATION; i++)
    {
        std::cout << "|" << combination[i] << "|"
                  << " ";
    }
    std::cout << "Results:|" << results[INDEX_BLACK_RESULT] << " Blacks|" << results[INDEX_WHITE_RESULT] << "Whites|"
              << " " << std::endl;
}