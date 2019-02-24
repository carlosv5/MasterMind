#include "commandUndo.hpp"
#include <iostream>

using namespace std;

bool CommandUndo::isActive(State state){
    return true;
}

bool CommandUndo::isDoable(MementoRegistry * mementoRegistry) {
    return mementoRegistry->undoable();
}

void CommandUndo::execute(GameMenuController * controller){
    controller->undo();
    ColocateController * colocateController = controller->getColocateController();
	ProposedCombinationView * proposedCombinationView = new ProposedCombinationView;
    proposedCombinationView->printPreviewCombinations(colocateController->getProposedCombinationsArray(), colocateController->getTurn());
}