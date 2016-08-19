#ifndef DSKTP
#define DSKTP

#include "Computer.h"

class Desktop : public Computer
{
  private:
    //Constructor
    Desktop();
    
    //Destructor
    ~Desktop();
  public:
    //Methods
    void selected();
    
  friend class FactoryConcrete;
};



Desktop::Desktop()
{
  //Code for constructor goes in here.
}

Desktop::~Desktop()
{
  //Code for destructor goes in here.
}

void Desktop::selected()
{
  //Code for selected goes in here.
	std::cout<<"You have chosen a Desktop computer."<<std::endl;
	std::cout<<"Selecting components..."<<std::endl;
	std::cout<<"Assemling all components..."<<std::endl;
	std::cout<<"Installing drivers..."<<std::endl;
	std::cout<<"Configuration applied..."<<std::endl;
	std::cout<<"Packing final product..."<<std::endl;
	std::cout<<"Done!"<<std::endl;
}

#endif