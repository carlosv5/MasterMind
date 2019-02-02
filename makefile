FLAGS = -g

all: game

clean: 
	rm masterMind

clean_objects: 
	rm *.o

game: masterMind.o secretCombination.o proposedCombination.o color.o 
	g++ masterMind.o secretCombination.o proposedCombination.o color.o -o masterMind $(FLAGS) 
	make clean_objects

masterMind.o: masterMind.cpp headers/masterMind.hpp headers/secretCombination.hpp headers/proposedCombination.hpp
	g++ -c masterMind.cpp

secretCombination.o: src/secretCombination.cpp headers/secretCombination.hpp
	g++ -c src/secretCombination.cpp

proposedCombination.o: src/proposedCombination.cpp headers/proposedCombination.hpp
	g++ -c src/proposedCombination.cpp	

color.o: src/color.cpp headers/color.hpp
	g++ -c src/color.cpp