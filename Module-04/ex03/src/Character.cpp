#include <Character.hpp>

Character::Character( std::string const name ) : _name(name), _inventory() {}

Character::Character( Character const & b ) {

	this->operator=(b);
}

Character::~Character() {

	for (int i = 0; i < 4; i++) {
		delete this->_inventory[i];
	}
}

Character	&Character::operator=( Character const & b ) {

	if (this != &b) {
		for (int i = 0; i < 4; i++) {
			this->_inventory[i] = b._inventory[i];
		}
	}

	return	*this;
}

std::string const &	Character::getName() const {

	return this->_name;
}

void				Character::equip( AMateria* m ) {

	int i = 0;
	while (this->_inventory[i]) {
		if (!this->_inventory[i]) {
			this->_inventory[i] = m;
		}
		i++;
	}
}

void				Character::unequip( int idx ) {

	if (this->_inventory[idx]) {
		this->_inventory[idx] = nullptr;
	}
}

void				Character::use( int idx, ICharacter& target ) {

	if (this->_inventory[idx]) {
		this->_inventory[idx]->use(target);
	}
}
