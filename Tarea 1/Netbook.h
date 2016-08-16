#ifndef NTBK
#define NTBK

#include "Computer.h"
#include <iostream>

class Netbook : public Computer
{
  public:
    //Constructor
    Netbook();

    //Destructor
    ~Netbook();

    //Methods
    static int selected();
};

#endif