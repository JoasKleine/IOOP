#pragma once
#include <string>

class Persoon
{
public:


	int leeftijd;
	//Character constant? VRAAG?

	std::string naam;

	void PrintLeeftijd();
	void PrintNaam();

	

	//Opdracht, leeftijd en naam in superclass. bedenk per class een atribuut wat de andere niet heeft, probeer dan alles te printen.


	Persoon();
	~Persoon();
};

