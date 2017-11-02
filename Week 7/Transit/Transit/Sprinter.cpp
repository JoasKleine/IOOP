#include "stdafx.h"
#include "Sprinter.h"
#include <iostream>


float Sprinter::Calculate()
{
	std::cout << "The Sprinters's ticket sales will be : $";
	
	return Train::Calculate();
}

Sprinter::Sprinter()
{
}


Sprinter::~Sprinter()
{
}
