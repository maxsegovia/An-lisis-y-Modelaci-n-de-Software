#ifndef TBLT
#define TBLT

#include "Computer.h"

class Tablet : public Computer
{
  private:
    //Constructor
    Tablet();

    //Destructor
    ~Tablet();
  public:
    //Methods
    void selected();
    
  friend class FactoryConcrete;
};

Tablet::Tablet()
{
  //Code for constructor goes in here.
}

Tablet::~Tablet()
{
  //Code for destructor goes in here.
}

void Tablet::selected()
{
  //Code for selected goes in here.
	std::cout<<"You have chosen a Tablet computer."<<std::endl;
	std::cout<<"Selecting components..."<<std::endl;
	std::cout<<"Assemling all components..."<<std::endl;
	std::cout<<"Installing drivers..."<<std::endl;
	std::cout<<"Configuration applied..."<<std::endl;
	std::cout<<"Packing final product..."<<std::endl;
	std::cout<<"Done!"<<std::endl;
}

#endif