#include "stdafx.h"
#include "Greyhound.h"
#include <iostream>


float Greyhound::Calculate()
{
	std::cout << "The Greyhounds's ticket sales will be : $";
	return amountKM*priceKM + (amountKM/feulFareKM*feulFare) + (maxPas*ticketPrice);

}

Greyhound::Greyhound()
{
}


Greyhound::~Greyhound()
{
}
