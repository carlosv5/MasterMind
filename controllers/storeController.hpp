#ifndef STORE_CONTROLLER
#define STORE_CONTROLLER

#include "../models/game.hpp"
#include "../models/store/storeType.hpp"
#include "../models/store/textStore.hpp"

class StoreController
{
  public:
    virtual void save(std::string title) = 0;
    virtual void load() = 0;

    protected:
    StoreType * storeType;
};

#endif