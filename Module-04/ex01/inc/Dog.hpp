#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : virtual public Animal {

	private:
		Brain	a;

	public:
		Dog();
		Dog( Dog const & b );
		~Dog();

		Dog	&operator=( Dog const & b );
};
