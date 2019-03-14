#ifndef TEXT_STORE
#define TEXT_STORE
#include <stdlib.h>
#include <iostream>
#include "storeType.hpp"
#include <vector>

class TextStore : public StoreType
{
  public:
    TextStore(Game* game) : StoreType(game){};
    void save(std::string title);
    std::string * load(std::string title);
    void read_directory(std::vector<std::string>& v);  
      
};

#endif