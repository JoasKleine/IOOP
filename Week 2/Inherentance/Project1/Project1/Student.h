#pragma once
#include "Persoon.h"

class Student : public Persoon
{
	

public:

	int leerlingNummer;

	void PrintLeerlingNummer();

	Student();
	~Student();
};