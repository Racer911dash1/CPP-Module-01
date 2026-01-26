#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : type_(type)
{
	std::cout << YELLOW << "Parameterized Weapon Contructor Called\n" << RESET;
}

const std::string& Weapon::getType() const
{
	return type_;
}

void Weapon::setType(const std::string& type)
{
	type_ = type;
}
