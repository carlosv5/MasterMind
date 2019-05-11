
#include "masterMindStandAlone.hpp"

using namespace std;

int main()
{
	MasterMindStandAlone(new ConsoleView(), new LocalLogic()).play();
}