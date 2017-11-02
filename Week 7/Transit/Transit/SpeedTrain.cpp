#include "stdafx.h"
#include "SpeedTrain.h"
#include <iostream>

using namespace std;

float SpeedTrain::Calculate()
{
	std::cout << "The Speedtrain's ticket sales will be : $";
	return amountKM*priceKM + (amountKM*addage*maxPas) + (maxPas*ticketPrice);
}

SpeedTrain::SpeedTrain()
{
}


SpeedTrain::~SpeedTrain()
{
}
