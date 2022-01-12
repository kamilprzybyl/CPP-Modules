#pragma once

#include <AMateria.hpp>
#include <ICharacter.hpp>

class	Cure : public AMateria {

	public:
		Cure();
		Cure( Cure const & b );
		virtual ~Cure();

		Cure	&operator=( Cure const & b );

		AMateria*	clone() const;
		void		use( ICharacter& target );
};
