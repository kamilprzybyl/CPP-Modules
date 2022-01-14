#include <MateriaSource.hpp>

MateriaSource::MateriaSource() : _inventory() {}

MateriaSource::MateriaSource( MateriaSource const & b ) {

	*this = b;
}

MateriaSource::~MateriaSource() {

	for (int i = 0; i < 4; i++) {
		delete this->_inventory[i];
	}
}

MateriaSource	&MateriaSource::operator=( MateriaSource const & b ) {

	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = b._inventory[i];
	}

	return *this;
}

void	MateriaSource::learnMateria( AMateria* m ) {

	if (!m) return ;

	for (int i = 0; i < 4; i++) {
		if (!this->_inventory[i]) {
			this->_inventory[i] = m;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria( std::string const & type ) {

	for (int i = 0; i < 4; i++)  {
		if (this->_inventory[i] && this->_inventory[i]->getType() == type) {
			return this->_inventory[i]->clone();
		}
	}

	return nullptr;
}
