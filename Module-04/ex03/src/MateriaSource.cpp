#include <MateriaSource.hpp>

MateriaSource::MateriaSource() {}

MateriaSource::MateriaSource( MateriaSource const & b ) {

	*this = b;
}

MateriaSource::~MateriaSource() {}

MateriaSource	&MateriaSource::operator=( MateriaSource const & b ) {

	return *this;
}

void	MateriaSource::learnMateria( AMateria* ) {

	
}
