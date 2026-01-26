#include "Zombie.hpp"

int main()
{
	{
		Zombie zombie("Albert");
		zombie.announce();
	}
	{
		int	count = 5;
		Zombie* horde = zombieHorde(count, "Grunt");

		for (int i = 0; i < count; i++)
		{
			horde[i].announce();
		}
		delete[] horde;
	}
	return EXIT_SUCCESS;
}
