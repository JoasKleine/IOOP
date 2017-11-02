#pragma once
#include <vector>
#include "Boek.h"
class Bibliotheek
{

private:

	Boek* boek = new Boek();
	std::vector<Boek*> alleBoeken;

public:
	
	Bibliotheek();
	void AddBook(std::string name);
	void ShowBook();
	void TakeBook();

	~Bibliotheek();
};

