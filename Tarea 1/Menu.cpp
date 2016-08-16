#include "Desktop.h"
#include "Laptop.h"
#include "Netbook.h"
#include "Tablet.h"
#include <iostream>

int main()
{
	//Declare variables
	int a;
	
	//Starts menu
	std::cout<<"WELCOME TO ULTIMATE PC STORE 2016"<<std::endl;
	std::cout<<"What kind of PC are you looking for?\n1. Desktop\n2. Laptop\n3. Netbook\n4. Tablet"<<std::endl;
	std::cin>>a;
	
	
	switch(a){
		case 1:
			Desktop::selected();
			break;
		case 2:
			Laptop::selected();
			break;
		case 3:
			Netbook::selected();
			break;
		case 4:
			Tablet::selected();
			break;
		default:
			std::cout<<"Invalit option!"<<std::endl;
	}
	std::cout<<"Selecting components..."<<std::endl;
	std::cout<<"Assemling all components..."<<std::endl;
	std::cout<<"Installing drivers..."<<std::endl;
	std::cout<<"Configuration applied..."<<std::endl;
	std::cout<<"Packing final product..."<<std::endl;
	std::cout<<"Done!"<<std::endl;

	return 0;
}