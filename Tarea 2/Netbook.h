#ifndef NTBK
#define NTBK

#include "Computer.h"


class Netbook : public Computer
{
  private:
    //Constructor
    Netbook();

    //Destructor
    ~Netbook();
  public:
    //Methods
    void selected();
    
  friend class FactoryConcrete;
};


Netbook::Netbook()
{
  //Code for constructor goes in here.
}

Netbook::~Netbook()
{
  //Code for destructor goes in here.
}

void Netbook::selected()
{
  //Code for selected goes in here.
	std::cout<<"You have chosen a Netbook computer."<<std::endl;
	std::cout<<"Selecting components..."<<std::endl;
	std::cout<<"Assemling all components..."<<std::endl;
	std::cout<<"Installing drivers..."<<std::endl;
	std::cout<<"Configuration applied..."<<std::endl;
	std::cout<<"Packing final product..."<<std::endl;
	std::cout<<"Done!"<<std::endl;
}

#endif