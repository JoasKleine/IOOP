#include "stdafx.h"
#include <iostream>
#include "Bibliotheek.h"
#include "Boek.h"


int main()
{
	Bibliotheek* bieb = new Bibliotheek();
	bieb->ShowBook();

	std::cout << "Maak Boek" << std::endl;
	bieb->AddBook("Book of heh?");
	bieb->ShowBook();
	std::cout << "gooi boek weg/leen?" << std::endl;
	// Het was voor mij niet helemaal duidelijk wat er werd bedoeld met 'uitlenen'
	bieb->TakeBook();
	bieb->ShowBook();



	char c;
	std::cin >> c;


    return 0;
}

