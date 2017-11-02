#include "stdafx.h"
#include "Train.h"
#include <iostream>

using namespace std;

void Train::getData()
{
	std::cout << "Type in the amount of KM traveled" << std::endl;
	cin >> amountKM;
	std::cout << "Type in the amount of Price per KM" << std::endl;
	cin >> priceKM;
	std::cout << "Type in the maximum of passenger" << std::endl;
	cin >> maxPas;
	//std::cout << "Type in the ticket price" << std::endl;
	//cin >> ticketPrice;
}

float Train::Calculate()
{
	return amountKM*priceKM + (maxPas*ticketPrice);
}

Train::Train()
{
}


Train::~Train()
{
}
