#pragma once
#include "Animal.h"


class Cat : public Animal
{
public:

	void MakeNoise() override;


	Cat();
	~Cat();
};

