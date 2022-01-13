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

	int i = 0;
	while (this->_inventory[i]) {
		if (!this->_inventory[i]) {
			this->_inventory[i] = m;
		}
		i++;
	}
}

AMateria*	MateriaSource::createMateria( std::string const & type ) {

	int i = 0;
	while (this->_inventory[i]) {
		if (this->_inventory[i]->getType() == type) {
			return this->_inventory[i];
		}
	}

	return nullptr;
}
