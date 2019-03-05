#include "commandLoad.hpp"
#include <iostream>

bool CommandLoad::isActive(State state){
    if(state!=IN_GAME){
        return true;
    }
    return false;
}

void CommandLoad::execute(NoGameMenuController * controller){
    std::cout << "-> Which game do you want to load?" << std::endl;
    std::string gameName;
    getline(std::cin, gameName);
    controller->getMementoRegistry()->flush();
    controller->load(gameName);
    ColocateController * colocateController = controller->getColocateController();
	ProposedCombinationView * proposedCombinationView = new ProposedCombinationView;
    proposedCombinationView->printPreviewCombinations(colocateController->getProposedCombinationsArray(), colocateController->getTurn());
}