#ifndef MEMENTO_REGISTRY
#define MEMENTO_REGISTRY
#include "game.hpp"
#include "gameMemento.hpp"
#include <list>

class MementoRegistry
{
public:
  MementoRegistry(Game *game);
  void execute();
  void undo(Game *game);
  void redo(Game *game);
  bool undoable();
  bool redoable();
  void flush();


private:
  Game *game;
  std::list<GameMemento*> undoList;
  std::list<GameMemento*> redoList;
};

#endif