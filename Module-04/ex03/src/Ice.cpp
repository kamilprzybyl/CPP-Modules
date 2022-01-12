#include <Ice.hpp>

Ice::Ice() : AMateria("ice") {}

Ice::Ice( Ice const & b ) {

	*this = b;
}

Ice::~Ice() {}

Ice	&Ice::operator=( Ice const & b ) {

	this->_type = b._type;

	return *this;
}

AMateria*	Ice::clone() const {

	return new Ice();
}

void	Ice::use( ICharacter& target ) {

	std::cout <<  "* heals " << target.getName() << " wounds *" << std::endl;
}
