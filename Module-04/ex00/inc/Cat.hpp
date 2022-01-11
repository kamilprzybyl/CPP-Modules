#pragma once

#include <iostream>
#include "Animal.hpp"

class	Cat : virtual public Animal {

	public:
		Cat();
		Cat( Cat const & b );
		~Cat();

		Cat	&operator=( Cat const & b );
};
