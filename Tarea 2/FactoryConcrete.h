#ifndef FCTRYCNCRT
#define FCTRYCNCRT

#include "Factory.h"
#include "Desktop.h"
#include "Laptop.h"
#include "Netbook.h"
#include "Tablet.h"

class FactoryConcrete : public Factory
{
  public:
    //Constructor
    FactoryConcrete();

    //Destructor
    ~FactoryConcrete();

    //Methods
    Computer* factory_method(int a);
};

FactoryConcrete::FactoryConcrete()
{
	//
}

FactoryConcrete::~FactoryConcrete()
{
	//
}

Computer* FactoryConcrete::factory_method(int a)
{
  if (a == 1)
    return new Desktop;
  else if (a == 2)
    return new Laptop;
  else if (a == 3)
    return new Netbook;
  else if (a == 4)
    return new Tablet;
  else
    std::cout<<"Invalid Option!"<<std::endl;
  
}


#endif