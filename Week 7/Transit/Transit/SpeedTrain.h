#pragma once
#include "Train.h"
class SpeedTrain : public Train
{
protected:
	float addage = 0.5;

public:

	float Calculate();

	SpeedTrain();
	~SpeedTrain();
};

