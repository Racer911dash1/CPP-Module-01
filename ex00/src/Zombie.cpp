#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	std::cout << GREEN << name << " constructor called\n" << RESET;
	name_ = name;
}

Zombie::~Zombie()
{
	std::cout << RED << name_ << " destructor called\n" << RESET;
}

void Zombie::announce()
{
	std::cout << name_ << ": BraiiiiiiinnnzzzZ...\n";
}
