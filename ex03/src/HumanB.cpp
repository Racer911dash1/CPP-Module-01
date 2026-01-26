#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name_(name)
{
	std::cout << GREEN << "HumanB Constructor Called\n" << RESET;
}

void HumanB::setWeapon(Weapon& Weapon)
{
	Weapon_ = &Weapon;
}

void HumanB::attack() const
{
	if (Weapon_)
	{
		std::cout << name_ << " attacks with their " << Weapon_->getType() << "\n";
	}
	else
	{
		std::cout << name_ << " does not have a weapon to fight with, so they throw their hands instead\n";
	}
}
