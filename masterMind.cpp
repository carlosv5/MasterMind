#include <iostream>
#include "headers/masterMind.hpp"
#include "string"

using namespace std;

MasterMind::MasterMind()
{
    secretCombination = new SecretCombination();
    proposedCombinations = new ProposedCombination[MAX_PROPOSED_COMBINATION];
};

void MasterMind::play()
{
    std::cout << "\033[1;31mM A S T E R  M I N D \033[0m\n"
              << std::endl;
    int current = 0;
    do
    {
        proposedCombinations[current].createCombination();
        proposedCombinations[current].read();
        proposedCombinations[current].calculateResult(*secretCombination);
        this->print(current);
        current++;
    } while (!proposedCombinations[current - 1].isWinner() && current < MAX_PROPOSED_COMBINATION);

    if (proposedCombinations[current - 1].isWinner())
    {
        winMessage();
    }
    else
    {
        std::cout << "Better luck next time! :) The combination was:" << std::endl;
        this->getSecretCombination()->print();
    }
};

void MasterMind::print(int iteration)
{
    std::cout << "Results:" << std::endl;
    for (int i = 0; i < iteration + 1; i++)
    {
        proposedCombinations[i].print();
    }
}

SecretCombination *MasterMind::getSecretCombination()
{
    return secretCombination;
}

void MasterMind::winMessage()
{
    std::cout << "You win!! :D" << std::endl;
}

int main()
{
    MasterMind().play();
}
