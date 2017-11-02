#include <iostream>
#include "student.h"
#include "docent.h"



int main() {
	std::cout << "Shall we begin" << std::endl;
	
	//Classes	
	Student student;
	Docent docent;
	
	//Lets go!!!
	student.PrintNaam();
	student.PrintLeeftijd();
	student.PrintLeerlingNummer();
	
	std::cout << "Docent" << std::endl;
	
	docent.PrintFunctie();
	docent.PrintNaam();
	docent.PrintLeeftijd();

	char key;
	std::cin >> key;

	return 0;

}