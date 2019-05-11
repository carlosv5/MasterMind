
#include "masterMindClient.hpp"

using namespace std;

int main()
{
	MasterMindClient(new ConsoleView(), new DistributedLogic()).play();
}