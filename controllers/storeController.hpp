#ifndef STORE_CONTROLLER
#define STORE_CONTROLLER

#include "../models/game.hpp"
#include "../models/store/storeType.hpp"
#include "../models/store/textStore.hpp"

class StoreController
{
  public:
    virtual void save(std::string title) = 0;
    virtual void load(std::string title) = 0;
    virtual void showFiles(std::vector<std::string>& v) = 0;

    protected:
    StoreType * storeType;
};

#endif