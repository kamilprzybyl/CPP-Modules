#include <Character.hpp>

Character::Character() {}

Character::Character( std::string const name ) {}

Character::Character( Character const & b ) {

	*this = b;
}

Character::~Character() {}

Character	&Character::operator=( Character const & b ) {



	return	*this;
}

std::string const &	Character::getName() const {

	return this->
}

void				Character::equip( AMateria* m ) {

}

void				Character::unequip( int idx ) {

}

void				Character::use( int idx, ICharacter& target ) {

}
