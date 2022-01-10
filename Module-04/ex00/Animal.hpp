#pragma once

#include <iostream>

class	Animal {

	protected:
		std::string	type;

	public:
		Animal();
		Animal( Animal const & b );
		~Animal();

		Animal	&operator=( Animal const & b );

		void		makeSound( void );
		std::string	getType( void );
};
