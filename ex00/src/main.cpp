#include "Zombie.hpp"

int main()
{
	{
		Zombie zombie("Albert");
		zombie.announce();
	}
	{
		randomChump("Brandon");
	}
	{
		Zombie *zombie = newZombie("Charlie");
		zombie->announce();
		delete zombie;
	}
	return EXIT_SUCCESS;
}
