#include "Harl.hpp"
#include "colors.hpp"

void Harl::complain(const std::string& level)
{
	void (Harl::*functions[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	size_t i = 0;

	for (i = 0; i < 4; i++)
	{
		if (level.compare(levels[i]) == 0)
		{
			break ;
		}
	}
	switch (i)
	{
		case 0:
			(this->*functions[0])();
			[[fallthrough]];
		case 1:
			(this->*functions[1])();
			[[fallthrough]];
		case 2:
			(this->*functions[2])();
			[[fallthrough]];
		case 3:
			(this->*functions[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}

void Harl::debug()
{
	std::cout <<	"[ DEBUG ]\n"
					"I love having extra bacon for my "
					"7XL-double-cheese-triple-pickle-special-ketchup burger. "
					"I really do!\n\n";
}

void Harl::info()
{
	std::cout <<	"[ INFO ]\n"
					"I cannot believe adding extra bacon costs more money. "
					"You didn't put enough bacon in my burger! "
					"If you did, I wouldn't be asking for more!\n\n";
}

void Harl::warning()
{
	std::cout <<	"[ WARNING ]\n"
					"I think I deserve to have some extra bacon for free. "
					"I've been coming for years, "
					"whereas you started working here just last month.\n\n";
}

void Harl::error()
{
	std::cout <<	"[ ERROR ]\n"
					"This is unacceptable! I want to speak to the manager now.\n\n";
}
