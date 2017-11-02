#pragma once
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"


class AnimalDetector
{
public:

	void Detect(Animal a);
	void Detect(Cat c);
	void Detect(Dog g);

	AnimalDetector();
	~AnimalDetector();
};

