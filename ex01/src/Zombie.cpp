#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << GREEN << "Default Zombie constructor called\n" << RESET;
}

Zombie::Zombie(std::string name)
{
	std::cout << GREEN << name << " constructor called\n" << RESET;
	name_ = name;
}

void Zombie::announce()
{
	std::cout << name_ << ": BraiiiiiiinnnzzzZ...\n";
}
