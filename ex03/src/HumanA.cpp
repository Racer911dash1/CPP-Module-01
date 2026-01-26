#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& Weapon) : name_(name), Weapon_(Weapon)
{
	std::cout << GREEN << "HumanA Constructor Called\n" << RESET;
}

void HumanA::setWeapon(Weapon& Weapon)
{
	Weapon_ = Weapon;
}

void HumanA::attack() const
{
	std::cout << name_ << " attacks with their " << Weapon_.getType() << "\n";
}
