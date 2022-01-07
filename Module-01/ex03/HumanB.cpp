#include "HumanB.hpp"

HumanB::HumanB( std::string name ): name(name), weapon(nullptr) {}

HumanB::~HumanB() {}

void	HumanB::attack() const {

	if (this->weapon) {
		
		std::cout << this->name << "  attacks with his " << this->weapon->getType() << std::endl;
		return;
	}

	std::cout << this->name << ": no weapon set" << std::endl;
}

void	HumanB::setWeapon( Weapon& weapon ) {

	this->weapon = &weapon;
}