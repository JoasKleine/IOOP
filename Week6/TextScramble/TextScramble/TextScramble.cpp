#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

int main()
{
	char t1;
	char t2;

	std::ifstream text1;
	text1.open("D:\\School\\IOOP\\IOOP\\Text1.txt");

	std::ifstream text2;
	text2.open("D:\\School\\IOOP\\IOOP\\Text2.txt");

	std::ofstream outputFile;
	outputFile.open("D:\\School\\IOOP\\IOOP\\Text_Output.txt");

	bool skip = true;

	while (!text1.eof()) {
		text1 >> std::noskipws;
		text1 >> t1;

		text2 >> std::noskipws;
		text2 >> t2;

		outputFile << t1;
		outputFile << t2;
		skip = !skip;
		if (!skip) {
			outputFile << t1;
		}
		else {
			outputFile << t2;
		}
	}



	text1.close();
	text2.close();
	outputFile.close();

	char c;
	std::cin >> c;

	return 0;
}