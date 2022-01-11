#pragma once

#include <iostream>
#include "Animal.hpp"

class	Dog : virtual public Animal {

	public:
		Dog();
		Dog( Dog const & b );
		~Dog();

		Dog	&operator=( Dog const & b );
};
