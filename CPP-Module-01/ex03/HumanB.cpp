#include "HumanB.hpp"

HumanB::HumanB( std::string name ): name(name), weapon(nullptr) {}

HumanB::~HumanB() {}

void	HumanB::attack() const {

	std::cout << this->name << "  attacks with his " << this->weapon.getType() << std::endl;
}

void	HumanB::setWeapon( Weapon& weapon ) {

	this->weapon = weapon;
}