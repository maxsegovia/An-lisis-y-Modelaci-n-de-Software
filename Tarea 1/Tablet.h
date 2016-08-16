#ifndef TBLT
#define TBLT

#include "Computer.h"
#include <iostream>

class Tablet : public Computer
{
  public:
    //Constructor
    Tablet();

    //Destructor
    ~Tablet();

    //Methods
    static int selected();
};

#endif