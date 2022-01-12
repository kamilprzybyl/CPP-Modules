#pragma once

#include <AMateria.hpp>
#include <ICharacter.hpp>

class	Ice : public AMateria {

	public:
		Ice();
		Ice( Ice const & b );
		virtual ~Ice();

		Ice	&operator=( Ice const & b );

		AMateria*	clone() const;
		void		use( ICharacter& target );
};
