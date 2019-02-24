#include "mementoRegistry.hpp"
#include <iostream>

MementoRegistry::MementoRegistry(Game *game)
{
    this->game = game;
}

void MementoRegistry::execute()
{
    GameMemento *gameMemento = game->createGameMemento();
    undoList.push_front(gameMemento);
    redoList.clear();
}

void MementoRegistry::undo(Game *game)
{
    GameMemento *gameMemento = game->createGameMemento();
    game->restore(undoList.front());
    undoList.pop_front();
    redoList.push_front(gameMemento);
}

void MementoRegistry::redo(Game *game)
{
    GameMemento *gameMemento = game->createGameMemento();
    game->restore(redoList.front());
    redoList.pop_front();
    undoList.push_front(gameMemento);
}

bool MementoRegistry::undoable(){
    if(undoList.empty()){
        return false;
    }
    return true;
}

bool MementoRegistry::redoable(){
    if(redoList.empty()){
        return false;
    }
    return true;
}

void MementoRegistry::flush(){
    if(game->getTurn() == 0){
        redoList.clear();
        undoList.clear();
    }
}