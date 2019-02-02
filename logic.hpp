#ifndef LOGIC
#define LOGIC

#include "controllers/controller.hpp"

class Logic 
{
  public:
    virtual Controller * getController() = 0;
};

#endif