#include <assert.h>
#include <iostream>
#include "continueView.hpp"
#include "../../controllers/continueController.hpp"

using namespace std;

ContinueView::ContinueView(){};

void ContinueView::interact(ContinueController * continueController){
    char answer;
	do
	{
		std::cout << "Do you want to play again? (y/n)" << std::endl;
		cin >> answer;
		cin.ignore();
	} while (answer != 'y' && answer != 'Y' && answer != 'N' && answer != 'n');
	if (answer == 'y' or answer == 'Y')
	{
	    continueController->resume();       
	}
	else
	{
	    continueController->finish();
	}
};

