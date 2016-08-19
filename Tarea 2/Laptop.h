#ifndef LPTP
#define LPTP

#include "Computer.h"

class Laptop : public Computer
{
  public:
    //Constructor
    Laptop();

    //Destructor
    ~Laptop();
  public:
    //Methods
    void selected();
    
  friend class FactoryConcrete;
};

Laptop::Laptop()
{
  //Code for constructor goes in here.
}

Laptop::~Laptop()
{
  //Code for destructor goes in here.
}

void Laptop::selected()
{
  //Code for selected goes in here.
	std::cout<<"You have chosen a Laptop computer."<<std::endl;
	std::cout<<"Selecting components..."<<std::endl;
	std::cout<<"Assemling all components..."<<std::endl;
	std::cout<<"Installing drivers..."<<std::endl;
	std::cout<<"Configuration applied..."<<std::endl;
	std::cout<<"Packing final product..."<<std::endl;
	std::cout<<"Done!"<<std::endl;

}

#endif
