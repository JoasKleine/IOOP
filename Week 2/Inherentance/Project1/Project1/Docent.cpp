#include "Docent.h"
#include <iostream>


void Docent::PrintFunctie()
{
	std::cout << functie << std::endl;
}

Docent::Docent()
{
	functie = "Docent zijn enzo";
	leeftijd = 69;
	naam = "Jan";
}


Docent::~Docent()
{
}
