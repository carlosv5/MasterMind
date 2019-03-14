#ifndef COMBINATION
#define COMBINATION

#include "color.hpp"
#include <iostream>
#include <stdlib.h>

class Combination
{
protected:
  char *combination;
  static const int SIZE_COMBINATION = 4;

public:
  virtual int getSize() { return SIZE_COMBINATION; };
  virtual char *getCombination() { return combination; };
  virtual void setCombination(char *combination) { 
    for(int i = 0; i < SIZE_COMBINATION; i++){
      this->combination[i] = combination[i];
    }
  };
  virtual std::string toString(std::string name)
  {
    std::string output = name + ": ";

    for (int i = 0; i < SIZE_COMBINATION; i++)
    {
      output += combination[i];
    }
    return output;
  }
};

#endif