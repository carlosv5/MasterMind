#ifndef MEMENTO_INTERFACE
#define MEMENTO_INTERFACE

#include "game.hpp"

class MementoInterface
  {
    public:
    virtual void restore() = 0;
  };

#endif