#ifndef COMBINATION
#define COMBINATION

#include "color.hpp"

class Combination
{
      public:
        virtual void print() = 0;

      protected:
        char *combination;
        static const int SIZE_COMBINATION = 4;
};

#endif