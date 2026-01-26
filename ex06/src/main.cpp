#include <iostream>
#include "Harl.hpp"

int main(int argc, const char* argv[])
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./harlFilter <warning level>\n";
		return EXIT_FAILURE;
	}
	std::string arg = argv[1];
	Harl harl;

	harl.complain(arg);
	return EXIT_SUCCESS;
}
