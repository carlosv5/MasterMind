#ifndef LOCAL_COLOCATE_CONTROLLER
#define LOCAL_COLOCATE_CONTROLLER

#include "../../models/game.hpp"
#include "../controller.hpp"
#include "../colocateController.hpp"

class LocalColocateController : public ColocateController, public Controller
{
  public:
    LocalColocateController(Game *game) : Controller(game)
    {
    };
    SecretCombination * getSecretCombination();
    int getCombinationSize();
    void createCombination();
    ProposedCombination getProposedCombination();
    void setProposedCombination(ProposedCombination proposedCombination);
    void calculateResult();
    ProposedCombination * getProposedCombinationsArray();
    int getTurn();
    void incrementTurn();
    bool isThereWinner();
    int getMaxNumberOfCombinations();
    void setState(State state);

};

#endif