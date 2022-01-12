#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal {

	private:
		Brain*	_brain;

	public:
		Cat();
		Cat( Cat const & b );
		virtual ~Cat();

		Cat	&operator=( Cat const & b );

		void	makeSound( void ) const;
};
