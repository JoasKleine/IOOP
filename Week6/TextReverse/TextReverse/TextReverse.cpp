// FileRead.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

#define FILE "D:\\School\\IOOP\\IOOP\\TextFile.txt"

int main()
{
	char ch;

	std::ifstream in_stream;
	in_stream.open(FILE);



	if (!in_stream) {
		std::cout << "Problem, Mate?" << std::endl;
		exit(1);
	}

	std::string data;
	getline(in_stream, data);
	std::reverse(data.begin(), data.end());

	std::ofstream out_stream;
	out_stream.open("D:\\School\\IOOP\\IOOP\\testout.txt");
	if (!out_stream) {
		std::cout << "Problem saving? Mate" << std::endl;
		exit(1);
	}
	out_stream << data;

	out_stream.close();
	in_stream.close();

	char c;
	std::cin >> c;

	return 0;
}
