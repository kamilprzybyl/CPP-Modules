#pragma once

#include <iostream>

class	WrongAnimal {

	protected:
		std::string	type;

	public:
		WrongAnimal();
		WrongAnimal( WrongAnimal const & b );
		virtual ~WrongAnimal();

		WrongAnimal	&operator=( WrongAnimal const & b );

		void		makeSound( void ) const;
		std::string	getType( void ) const;
};
