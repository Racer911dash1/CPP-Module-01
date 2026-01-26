#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);

		void setWeapon(Weapon& weapon);
		void attack() const;

	private:
		std::string name_;
		Weapon* Weapon_ {nullptr};
};

#endif /* HUMANB_HPP */
