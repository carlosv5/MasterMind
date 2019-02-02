#ifndef COMBINATION
#define COMBINATION

#include "color.hpp"

class Combination
{
      protected:
        char *combination;
        static const int SIZE_COMBINATION = 4;
      public:    
        virtual int getSize() {return SIZE_COMBINATION;};
        virtual char * getCombination() {return combination;};
        virtual void setCombination(char * combination){this->combination = combination;};

};

#endif