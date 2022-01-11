#pragma once

#include <iostream>
#include <Animal.hpp>
#include <Brain.hpp>

class	Dog : public Animal {

	private:
		Brain*	_brain;

	public:
		Dog();
		Dog( Dog const & b );
		virtual ~Dog();

		Dog	&operator=( Dog const & b );
};
