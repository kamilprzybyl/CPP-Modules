#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : virtual public Animal {

	private:
		Brain	a;

	public:
		Cat();
		Cat( Cat const & b );
		~Cat();

		Cat	&operator=( Cat const & b );
};
