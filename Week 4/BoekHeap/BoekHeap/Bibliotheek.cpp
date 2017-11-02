#include "stdafx.h"
#include <iostream>

#include "Bibliotheek.h"


Bibliotheek::Bibliotheek()
{
}



void Bibliotheek::AddBook(std::string name)
{
	boek = new Boek(name);
	alleBoeken.push_back(boek);
}

void Bibliotheek::ShowBook()
{
	//std::cout << "Boek: " << boek->_name << std::endl;|
	std::cout << "Biebliotheek " << std::endl;
	if (alleBoeken.size() < 1) {
		std::cout << "Leeg" << std::endl;
	}
	else {

		for (int i = 0; i < alleBoeken.size(); ++i) {


			std::cout << alleBoeken[i]->_name << std::endl;
		}
	}

}

void Bibliotheek::TakeBook()
{
	alleBoeken.pop_back();
}


Bibliotheek::~Bibliotheek()
{
}
