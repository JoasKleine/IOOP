#pragma once
#include <string>

class Boek
{
public:
	Boek();
	Boek(std::string name);

	std::string _name = "Book of Swag";

	~Boek();
};

