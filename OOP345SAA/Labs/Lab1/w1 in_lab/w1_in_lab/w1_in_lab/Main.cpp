#include <iostream>
#include "process.h"

int main(int argc, char **argv)
{
	std::cout << "Command Line: " << argv[0];
	for (int i = 1; i < argc; i++)
		std::cout << " " << argv[i];
	std::cout << std::endl;

	// If no parameters are passed, return 1
	if (argc < 2)
	{
		std::cout << "***Insufficient number of arguments***" << std::endl;
		return 1;
	}

	for (size_t i = 1; i < argc; i++)
		sict::process(argv[i]);

	return 0;
}