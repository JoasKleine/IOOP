#include "Student.h"
#include <iostream>


void Student::PrintLeerlingNummer()
{
	std::cout << leerlingNummer << std::endl;
}

Student::Student()
{
	leerlingNummer = 12124125;
	leeftijd = 5;
	naam = "Henkie";
}


Student::~Student()
{
}
