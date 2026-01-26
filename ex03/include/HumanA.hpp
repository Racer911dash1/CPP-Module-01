#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon& weapon);

		void setWeapon(Weapon& weapon);
		void attack() const;

	private:
		std::string name_;
		Weapon& Weapon_;
};

#endif /* HUMANA_HPP */
