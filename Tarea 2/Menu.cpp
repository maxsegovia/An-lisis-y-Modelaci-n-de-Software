#include "FactoryConcrete.h"

int main()
{
	//Declare variables
	int a;
	
	//Starts menu
	std::cout<<"WELCOME TO ULTIMATE PC STORE 2016"<<std::endl;
	std::cout<<"What kind of PC are you looking for?\n1. Desktop\n2. Laptop\n3. Netbook\n4. Tablet"<<std::endl;
	std::cin>>a;

	Factory* factory = new FactoryConcrete();
	factory->create(a);

	return 0;
}