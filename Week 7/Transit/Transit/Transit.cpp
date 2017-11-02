// Transit.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <iostream>
#include "train.h"
#include "SpeedTrain.h"
#include "Sprinter.h"
#include "lijnbus.h"
#include "Greyhound.h"


/*void CalculatePrice(Train& trains) {
	
	trains.Calculate();

}*/


int main()
{

	SpeedTrain a;
	Sprinter b;
	Lijnbus c;
	Greyhound d;

	std::cout << "Speedtrain" << std::endl;
	a.getData();
	std::cout << a.Calculate() <<  std::endl;
	std::cout << "" << std::endl;
	std::cout << "Sprinter" << std::endl;
	b.getData();
	std::cout << b.Calculate() << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Lijnbus" << std::endl;
	c.getData();
	std::cout << c.Calculate() << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Greyhound" << std::endl;
	d.getData();
	std::cout << d.Calculate() << std::endl;


	char x;
	std::cin >> x;

    return 0;
}

