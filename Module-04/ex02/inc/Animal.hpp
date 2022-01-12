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

		virtual void	makeSound( void ) const = 0;
		std::string		getType( void ) const ;
};
