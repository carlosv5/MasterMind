#include <assert.h>
#include <iostream>
#include "proposedCombinationView.hpp"
#include "../../controllers/local/localColocateController.hpp"
#include "../../models/proposedCombination.hpp"

using namespace std;

ProposedCombinationView::ProposedCombinationView(){};

ProposedCombination ProposedCombinationView::readProposedCombination(ProposedCombination proposedCombination, int SIZE_COMBINATION){
    showColorOptions();
    std::cout << "--Insert your colors (XXXX)--" << std::endl;
    std::string combinationString;
    getline(std::cin, combinationString);
    char * combination = proposedCombination.getCombination();

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
    return proposedCombination;
}

void ProposedCombinationView::showColorOptions()
{
    std::cout << "You can use these colors:" << std::endl;
    char *colorArray = new char[Color::numberOfColors];
    Color::values(colorArray);
    for (int i = 0; i < Color::numberOfColors; i++)
    {
        std::cout << colorArray[i] << " ";
    }
    std::cout << std::endl;
    delete (colorArray);
}


void ProposedCombinationView::printResults(ProposedCombination * proposedCombinations, int turn)
{
    std::cout << "Results:" << std::endl;
    for (int i = 0; i < turn + 1; i++){
        for (int j = 0; j < proposedCombinations[0].getSize(); j++)
        {
            std::cout << "|" << proposedCombinations[i].getCombination()[j] << "|"
                    << " ";
        }
        std::cout << "Results:|" << proposedCombinations[i].getResults()[INDEX_BLACK_RESULT] << " Blacks|" << proposedCombinations[i].getResults()[INDEX_WHITE_RESULT] << "Whites|"
                << " " << std::endl;
    }
}