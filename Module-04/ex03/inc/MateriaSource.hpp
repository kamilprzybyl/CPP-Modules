#pragma once

#include <IMateriaSource.hpp>
#include <AMateria.hpp>

class	MateriaSource : public IMateriaSource {

	public:
		MateriaSource();
		MateriaSource( MateriaSource const & b );
		~MateriaSource();

		MateriaSource	&operator=( MateriaSource const & b );

		void		learnMateria( AMateria* );
		AMateria*	createMateria( std::string const & type );
};
