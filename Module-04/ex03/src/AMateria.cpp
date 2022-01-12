#include <AMateria.hpp>

AMateria::AMateria() {}

AMateria::AMateria( AMateria const & b ) {

	*this = b;
}

AMateria::AMateria( std::string const & type ) : _type(type) {}

AMateria::~AMateria() {}

AMateria	&AMateria::operator=( AMateria const & b ) {

	this->_type = b._type;

	return *this;
}

std::string const &	AMateria::getType() const { return this->_type; }