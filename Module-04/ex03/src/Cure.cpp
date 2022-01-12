#include <Cure.hpp>

Cure::Cure() : AMateria("cure") {}

Cure::Cure( Cure const & b ) {

	*this = b;
}

Cure::~Cure() {}

Cure	&Cure::operator=( Cure const & b ) {

	this->_type = b._type;

	return *this;
}

AMateria*	Cure::clone() const {

	return new Cure();
}

void	Cure::use( ICharacter& target ) {

	std::cout <<  "* heals " << target.getName() << " wounds *" << std::endl;
}
