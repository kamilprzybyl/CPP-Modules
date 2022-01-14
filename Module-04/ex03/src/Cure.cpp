#include <Cure.hpp>

Cure::Cure() : AMateria("cure") {}

Cure::Cure( Cure const & b ) :AMateria(b) {}

Cure::~Cure() {}

Cure	&Cure::operator=( Cure const & b ) {

	if (this != &b) {

	}

	return *this;
}

AMateria*	Cure::clone() const {

	return new Cure();
}

void	Cure::use( ICharacter& target ) {

	std::cout <<  "* heals " << target.getName() << "'s wounds *" << std::endl;
}
