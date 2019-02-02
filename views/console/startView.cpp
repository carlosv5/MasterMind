#include <assert.h>
#include <iostream>
#include "startView.hpp"
#include "../../controllers/startController.hpp"

using namespace std;

StartView::StartView(){};

void StartView::interact(StartController * startController){
	std::cout << "\033[1;31mM A S T E R  M I N D \033[0m" << std::endl;
	startController->setConfig();
};

