#pragma once

#include <iostream>

class	Animal {

	protected:
		std::string	type;

	public:
		Animal();
		Animal( Animal const & b );
		virtual ~Animal();

		Animal	&operator=( Animal const & b );

		void		makeSound( void ) const ;
		std::string	getType( void ) const ;
};
