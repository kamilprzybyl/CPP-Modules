#pragma once

#include <AMateria.hpp>
#include <ICharacter.hpp>

class	Ice : public AMateria {

	public:
		Ice();
		Ice( Ice const & b );
		virtual ~Ice();

		Ice	&operator=( Ice const & b );

		virtual AMateria*	clone() const;
		virtual void		use( ICharacter& target );
};
