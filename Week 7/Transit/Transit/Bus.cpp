#include "stdafx.h"
#include "Bus.h"
#include <iostream>

void Bus::getData()
{

	std::cout << "Type in the amount of KM traveled" << std::endl;
	std::cin >> amountKM;
	std::cout << "Type in the amount of Price per KM" << std::endl;
	std::cin >> priceKM;
	std::cout << "Type in the maximum of passenger" << std::endl;
	std::cin >> maxPas;

}


float Bus::Calculate()
{
	return amountKM*priceKM + (maxPas*ticketPrice);
}

Bus::Bus()
{
}


Bus::~Bus()
{
}
