#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# include "colors.hpp"

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);

		void announce();

	private:
		std::string name_;
};

Zombie* zombieHorde(int number, std::string name);

#endif /* ZOMBIE_HPP */
