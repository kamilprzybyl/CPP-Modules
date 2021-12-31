#include "Weapon.hpp"

Weapon::Weapon( std::string type ): type(type) {}

Weapon::~Weapon() {}

void			Weapon::setType( const std::string& type ) {

	this->type = type;
}

std::string&	Weapon::getType() const {

	return this->type;
}