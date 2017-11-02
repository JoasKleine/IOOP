#include "stdafx.h"
#include "AnimalDetector.h"


void AnimalDetector::Detect(Animal a)
{
	std::cout << "SomeSort of animal" << std::endl;
}

void AnimalDetector::Detect(Cat a)
{
	std::cout << "Catzy" << std::endl;
}

void AnimalDetector::Detect(Dog a)
{
	std::cout << "WhoofYWhoof" << std::endl;
}

AnimalDetector::AnimalDetector()
{
}


AnimalDetector::~AnimalDetector()
{
}
