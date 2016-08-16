#ifndef LPTP
#define LPTP

#include "Computer.h"
#include <iostream>

class Laptop : public Computer
{
  public:
    //Constructor
    Laptop();

    //Destructor
    ~Laptop();

    //Methods
    static int selected();
};

#endif