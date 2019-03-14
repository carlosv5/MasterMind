#include "commandLoad.hpp"
#include <iostream>
#include <vector>
#include <iterator>

bool CommandLoad::isActive(State state){
    if(state!=IN_GAME){
        return true;
    }
    return false;
}

void CommandLoad::execute(NoGameMenuController * controller){
    std::cout << "--------------------" << std::endl;
    std::cout << "|Your games to load|" << std::endl;
    std::cout << "--------------------" << std::endl;
    std::vector<std::string> v;
    controller->showFiles(v);
    std::copy(v.begin(), v.end(), std::ostream_iterator<std::string>(std::cout, "\n"));
    std::cout << "--------------------" << std::endl;
    std::cout << "-> Which game do you want to load?" << std::endl;
    std::string gameName;
    getline(std::cin, gameName);
    controller->getMementoRegistry()->flush();
    controller->load(gameName);
    ColocateController * colocateController = controller->getColocateController();
	ProposedCombinationView * proposedCombinationView = new ProposedCombinationView;
    proposedCombinationView->printPreviewCombinations(colocateController->getProposedCombinationsArray(), colocateController->getTurn());
}