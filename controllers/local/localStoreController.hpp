#ifndef LOCAL_STORE_CONTROLLER
#define LOCAL_STORE_CONTROLLER

#include "../../models/game.hpp"
#include "../controller.hpp"
#include "../storeController.hpp"

class LocalStoreController : public StoreController, public Controller
{
  public:
    LocalStoreController(Game *game) : Controller(game){
      this->game = game;
      this->storeType = new TextStore(game);
    }
    void save(std::string title);
    void load(std::string title);
    void showFiles(std::vector<std::string>& v);
};

#endif