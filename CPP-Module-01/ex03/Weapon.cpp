#include "Weapon.hpp"

Weapon::Weapon( std::string arg) {

	this->type = arg;
}

Weapon::~Weapon() {}

void			Weapon::setType( std::string type ) {

	this->type = type;
}

std::string&	Weapon::getType( std::string type ) const {

	std::string&	typeRef = type;

	return typeRef;
}