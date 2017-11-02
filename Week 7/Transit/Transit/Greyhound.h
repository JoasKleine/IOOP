#pragma once
#include "Bus.h"
class Greyhound :
	public Bus
{

protected: 
	float feulFare = 5;
	float feulFareKM = 40;

public:

	float Calculate();

	Greyhound();
	~Greyhound();
};

