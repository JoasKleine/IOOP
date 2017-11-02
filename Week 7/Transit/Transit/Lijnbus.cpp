#include "stdafx.h"
#include "Lijnbus.h"
#include <iostream>


float Lijnbus::Calculate()
{
	std::cout << "The Lijnbus's ticket sales will be : $";

	return Bus::Calculate();
}

Lijnbus::Lijnbus()
{
}


Lijnbus::~Lijnbus()
{
}
