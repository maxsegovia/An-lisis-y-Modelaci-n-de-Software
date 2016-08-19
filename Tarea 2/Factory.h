#ifndef FCTRY
#define FCTRY

#include "Computer.h"

class Factory{
  public:
    //Constructor
    Factory();

    //Destructor
    ~Factory();

    //Methods
    virtual Computer* factory_method(int a);
    Computer* create(int a);
};

Factory::Factory()
{
  //Constructor goes here.
}

Factory::~Factory()
{
  //Destructor goes here.
}

Computer* Factory::create(int a)
{
  Computer* computer_type = factory_method(a);
  computer_type->selected();
  
  return computer_type;
}

Computer * Factory::factory_method(int a)
{
	return NULL;
}

#endif