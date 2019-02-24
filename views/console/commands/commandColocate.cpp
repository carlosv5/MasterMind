#include "commandColocate.hpp"
#include <iostream>

bool CommandColocate::isActive(State state){
    if(state==IN_GAME){
        return true;
    }
    return false;
}

void CommandColocate::execute(GameMenuController * controller){
    //controller->resume();
    ColocateController * colocateController = controller->getColocateController();
	colocateController->createCombination();

	ProposedCombinationView * proposedCombinationView = new ProposedCombinationView;
	ProposedCombination proposedCombination = proposedCombinationView->readProposedCombination(colocateController->getProposedCombination(),colocateController->getCombinationSize());
	colocateController->setProposedCombination(proposedCombination);

	colocateController->calculateResult();
	
	proposedCombinationView->printResults(colocateController->getProposedCombinationsArray(), colocateController->getTurn());

	if (colocateController->isThereWinner()){
	std::cout << "\033[1;37mYou win \033[0m" << std::endl;
	colocateController->setState(FINAL);
	} else if (colocateController->getTurn() == colocateController->getMaxNumberOfCombinations() -1){
	std::cout << "\033[1;31mYou lose \033[0m" << std::endl;
		this->printSecretCombination(colocateController);
		colocateController->setState(FINAL);
	}

	colocateController->incrementTurn();
}

void CommandColocate::printSecretCombination(ColocateController * colocateController){
	SecretCombination * secretCombination = colocateController->getSecretCombination();
	SecretCombinationView * secretCombinationView = new SecretCombinationView;
	secretCombinationView->printSecretCombination(secretCombination->getCombination(), colocateController->getCombinationSize());

}