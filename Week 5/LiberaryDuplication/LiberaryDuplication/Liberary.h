#pragma once
#include "Book.h"
#include <vector>

class Liberary
{
private:

	Book* book = new Book();
	std::vector<Book*> allBooks;

public:

	
	Liberary(std::string name);
	std::string thisName;
	virtual ~Liberary();

	void ShowBooks();
	void AddBook(std::string name);

	//~Liberary();
};

