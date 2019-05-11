#ifndef MASTERMIND
#define MASTERMIND
#include "controllers/controller.hpp"
#include "logic.hpp"
#include "view.hpp"

class MasterMind
{
public:
  virtual void play()
  {
    Controller *controller;
    do
    {
      controller = logic->getController();
      if (controller != NULL)
      {
        view->interact(controller);
      }
    } while (controller != NULL);
  };

private:
  Logic *logic;
  View *view;

protected:
  MasterMind(View *view, Logic *logic);
};

#endif