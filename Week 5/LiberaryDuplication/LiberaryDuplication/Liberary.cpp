#include "stdafx.h"
#include <iostream>
#include "Liberary.h"


Liberary::Liberary(std::string name)
{
	std::cout << name << std::endl;
	name = thisName;
	
}


Liberary::~Liberary()
{
	std::cout << "Liberary: de-constructor" << std::endl;
	delete book;
}



void Liberary::ShowBooks()
{
	std::cout << thisName << std::endl;
	std::cout << " This Liberary Contains: " << std::endl;
	if (allBooks.size() < 1) {
		std::cout << "Leeg" << std::endl;
	}
	else {

		for (int i = 0; i < allBooks.size(); ++i) {
			std::cout << allBooks[i]->_name << std::endl;
		}
	}
}

void Liberary::AddBook(std::string name)
{
	book = new Book(name);
	allBooks.push_back(book);
}
