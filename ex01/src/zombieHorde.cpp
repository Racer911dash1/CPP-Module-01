#include "Zombie.hpp"

Zombie* zombieHorde(int number, std::string name)
{
	Zombie* zombieHorde = new Zombie[number];

	for (int i = 0; i < number; i++)
	{
		zombieHorde[i] = Zombie(name);
	}
	return zombieHorde;
}
