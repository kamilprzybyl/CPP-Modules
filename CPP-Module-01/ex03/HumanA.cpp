#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon weapon1 ) {
	
	this->name = name;
}

HumanA::~HumanA() {}

void	HumanA::attack() {

	std::cout << this->name << "  attacks with his " << this->we
}