#pragma once

#include <IMateriaSource.hpp>
#include <AMateria.hpp>

class	MateriaSource : public IMateriaSource {

	private:
		AMateria*	_inventory[4];

	public:
		MateriaSource();
		MateriaSource( MateriaSource const & b );
		virtual ~MateriaSource();

		MateriaSource	&operator=( MateriaSource const & b );

		virtual void		learnMateria( AMateria* );
		virtual AMateria*	createMateria( std::string const & type );
};
