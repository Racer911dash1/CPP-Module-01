#include <iostream>
#include "Harl.hpp"

int main(void)
{
	Harl harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("some random string");
	harl.complain("");
	harl.complain("DEBUGS");
	return EXIT_SUCCESS;
}
