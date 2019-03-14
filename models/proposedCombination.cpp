#include <iostream>
#include <cstdlib>
#include <set>
#include <assert.h>

#include "proposedCombination.hpp"

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
    int black = 0;
    int white = 0;
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

void ProposedCombination::clear()
{
    delete combination;
    delete results;
}

int * ProposedCombination::getResults(){
    return this->results;
}