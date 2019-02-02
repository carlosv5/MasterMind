#include <assert.h>
#include <iostream>
#include "secretCombinationView.hpp"
#include "../../controllers/colocateController.hpp"

using namespace std;

SecretCombinationView::SecretCombinationView(){};

void SecretCombinationView::printSecretCombination(char * secretCombination, int MAX_SIZE){
    std::cout << "The secret combination was: ";
    for (int i = 0; i < MAX_SIZE; i++)
    {
        std::cout << secretCombination[i] << " ";
    }
    std::cout << std::endl;
}

