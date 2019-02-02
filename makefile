FLAGS = -g

all: game_mastermind

clean: 
	rm ./masterMind

clean_objects: 
	rm *.o

game_mastermind: masterMind.o secretCombination.o proposedCombination.o color.o controller.o  startController.o logic.o game.o colocateController.o continueController.o
	g++ masterMind.o secretCombination.o proposedCombination.o color.o controller.o startController.o logic.o game.o colocateController.o continueController.o -o masterMind $(FLAGS) 
	make clean_objects

masterMind.o: masterMind.cpp masterMind.hpp controllers/logic.hpp
	g++ -c masterMind.cpp

game.o: models/game.cpp models/game.hpp models/secretCombination.hpp models/proposedCombination.hpp models/state.hpp
	g++ -c models/game.cpp

secretCombination.o: models/secretCombination.cpp models/secretCombination.hpp models/combination.hpp
	g++ -c models/secretCombination.cpp

proposedCombination.o: models/proposedCombination.cpp models/proposedCombination.hpp models/combination.hpp
	g++ -c models/proposedCombination.cpp	

color.o: models/color.cpp models/color.hpp
	g++ -c models/color.cpp

controller.o: controllers/controller.cpp controllers/controller.hpp models/game.hpp
	g++ -c controllers/controller.cpp

startController.o: controllers/startController.cpp controllers/startController.hpp models/game.hpp controllers/controller.hpp
	g++ -c controllers/startController.cpp 

colocateController.o: controllers/colocateController.cpp controllers/colocateController.hpp models/game.hpp controllers/controller.hpp
	g++ -c controllers/colocateController.cpp 

continueController.o: controllers/continueController.cpp controllers/continueController.hpp models/game.hpp controllers/controller.hpp
	g++ -c controllers/continueController.cpp

logic.o: controllers/logic.cpp controllers/logic.hpp controllers/startController.hpp controllers/controller.hpp
	g++ -c controllers/logic.cpp