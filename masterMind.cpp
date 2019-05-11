#include <iostream>
#include "string"
#include "masterMind.hpp"

using namespace std;

MasterMind::MasterMind(View * view, Logic * logic)
{
	this->view = view;
	this->logic = logic;
};
