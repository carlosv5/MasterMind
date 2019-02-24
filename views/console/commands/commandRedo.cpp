#include "commandRedo.hpp"
#include <iostream>

using namespace std;

bool CommandRedo::isActive(State state){
    return true;
}


bool CommandRedo::isDoable(MementoRegistry * mementoRegistry) {
    return mementoRegistry->redoable();
}

void CommandRedo::execute(GameMenuController * controller){
    controller->redo();
    ColocateController * colocateController = controller->getColocateController();
	ProposedCombinationView * proposedCombinationView = new ProposedCombinationView;
    proposedCombinationView->printPreviewCombinations(colocateController->getProposedCombinationsArray(), colocateController->getTurn());
}