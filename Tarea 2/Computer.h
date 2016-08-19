#ifndef CMPTR
#define CMPTR

#include <iostream>

class Computer{
  public:
    //Constructor
    Computer();

    //Destructor
    ~Computer();

    //Methods
    virtual void selected();
};


Computer::Computer()
{
  //Code for constructor goes in here.
}

Computer::~Computer()
{
  //Code for destructor goes in here.
}

void Computer::selected()
{
  //Code for assigned function goes here.
}

#endif