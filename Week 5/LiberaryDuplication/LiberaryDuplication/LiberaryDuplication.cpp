// LiberaryDuplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Liberary.h"
#include "Book.h"


int main()
{
	Liberary liberary1 =  Liberary("Johnsons");
	liberary1.AddBook("Book1");
	liberary1.ShowBooks();

	Liberary liberary2 =  Liberary("Jhonnyyyy");
	liberary2 = liberary1;
	liberary2.ShowBooks();
	liberary2.AddBook("Book2");
	liberary2.AddBook("Book3");
	liberary2.AddBook("Book4");

	liberary2.ShowBooks();
	liberary1.ShowBooks();



	char c;
	std::cin >> c;

    return 0;
}

