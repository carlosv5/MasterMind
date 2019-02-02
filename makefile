FLAGS = -g

all: game_mastermind

clean: 
	rm *.o ./masterMind

clean_objects: 
	rm *.o

game_mastermind: masterMind.o secretCombination.o proposedCombination.o color.o localStartController.o localLogic.o game.o localColocateController.o localContinueController.o consoleView.o startView.o gameView.o continueView.o secretCombinationView.o proposedCombinationView.o localNoGameMenuController.o noGameMenuView.o command.o commandStart.o commandContinue.o commandEnd.o
	g++ masterMind.o secretCombination.o proposedCombination.o color.o localStartController.o localLogic.o game.o localColocateController.o localContinueController.o consoleView.o startView.o gameView.o continueView.o secretCombinationView.o proposedCombinationView.o localNoGameMenuController.o noGameMenuView.o command.o commandStart.o commandContinue.o commandEnd.o -o masterMind $(FLAGS) 
	make clean_objects

masterMind.o: masterMind.cpp masterMind.hpp controllers/local/localLogic.hpp views/console/consoleView.hpp
	g++ -c masterMind.cpp

game.o: models/game.cpp models/game.hpp models/secretCombination.hpp models/proposedCombination.hpp models/state.hpp
	g++ -c models/game.cpp

secretCombination.o: models/secretCombination.cpp models/secretCombination.hpp models/combination.hpp
	g++ -c models/secretCombination.cpp

proposedCombination.o: models/proposedCombination.cpp models/proposedCombination.hpp models/combination.hpp
	g++ -c models/proposedCombination.cpp	

color.o: models/color.cpp models/color.hpp
	g++ -c models/color.cpp

localStartController.o: controllers/local/localStartController.cpp controllers/local/localStartController.hpp models/game.hpp controllers/controller.hpp
	g++ -c controllers/local/localStartController.cpp 

localColocateController.o: controllers/local/localColocateController.cpp controllers/local/localColocateController.hpp models/game.hpp controllers/controller.hpp
	g++ -c controllers/local/localColocateController.cpp 

localContinueController.o: controllers/local/localContinueController.cpp controllers/local/localContinueController.hpp models/game.hpp controllers/controller.hpp
	g++ -c controllers/local/localContinueController.cpp

localLogic.o: controllers/local/localLogic.cpp controllers/local/localLogic.hpp controllers/local/localStartController.hpp controllers/controller.hpp logic.hpp
	g++ -c controllers/local/localLogic.cpp

localNoGameMenuController.o: controllers/local/localNoGameMenuController.cpp controllers/local/localNoGameMenuController.hpp models/game.hpp controllers/controller.hpp
	g++ -c controllers/local/localNoGameMenuController.cpp 

consoleView.o: views/console/consoleView.cpp views/console/consoleView.hpp controllers/controller.hpp view.hpp
	g++ -c views/console/consoleView.cpp

startView.o: views/console/startView.cpp views/console/startView.hpp controllers/controllerVisitor.hpp
	g++ -c views/console/startView.cpp

gameView.o: views/console/gameView.cpp views/console/gameView.hpp controllers/controllerVisitor.hpp views/console/secretCombinationView.hpp
	g++ -c views/console/gameView.cpp

continueView.o: views/console/continueView.cpp views/console/continueView.hpp controllers/controllerVisitor.hpp
	g++ -c views/console/continueView.cpp

secretCombinationView.o: views/console/secretCombinationView.cpp views/console/secretCombinationView.hpp
	g++ -c views/console/secretCombinationView.cpp

proposedCombinationView.o: views/console/proposedCombinationView.cpp views/console/proposedCombinationView.hpp
	g++ -c views/console/proposedCombinationView.cpp

noGameMenuView.o: views/console/noGameMenuView.cpp views/console/noGameMenuView.hpp controllers/controllerVisitor.hpp
	g++ -c views/console/noGameMenuView.cpp

command.o: views/console/commands/command.hpp views/console/commands/command.cpp 
	g++ -c views/console/commands/command.cpp

commandStart.o: views/console/commands/commandStart.hpp views/console/commands/commandStart.cpp views/console/commands/command.hpp
	g++ -c views/console/commands/commandStart.cpp

commandContinue.o: views/console/commands/commandContinue.hpp views/console/commands/commandContinue.cpp views/console/commands/command.hpp
	g++ -c views/console/commands/commandContinue.cpp

commandEnd.o: views/console/commands/commandEnd.hpp views/console/commands/commandEnd.cpp views/console/commands/command.hpp
	g++ -c views/console/commands/commandEnd.cpp