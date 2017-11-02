#pragma once
#include "Persoon.h"

class Docent : public Persoon
{
public:

	std::string functie;

	void PrintFunctie();

	Docent();
	~Docent();
};

