#pragma once

#include <iostream>

class	ICharacter;

class	AMateria {

	protected:
		std::string	_type;

	public:
		AMateria();
		explicit AMateria( AMateria const & b );
		AMateria( std::string const & type );
		virtual ~AMateria();

		AMateria	&operator=( AMateria const & b );

		std::string const & getType() const;

		virtual AMateria*	clone() const = 0;
		virtual void		use( ICharacter& target );
};
