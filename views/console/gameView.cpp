#include <assert.h>
#include <iostream>
#include "gameView.hpp"
#include "../../controllers/local/localColocateController.hpp"
#include "secretCombinationView.hpp"
#include "proposedCombinationView.hpp"

using namespace std;

GameView::GameView(){};

void GameView::interact(ColocateController * colocateController){
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
};

void GameView::printSecretCombination(ColocateController * colocateController){
	SecretCombination * secretCombination = colocateController->getSecretCombination();
	SecretCombinationView * secretCombinationView = new SecretCombinationView;
	secretCombinationView->printSecretCombination(secretCombination->getCombination(), colocateController->getCombinationSize());

}