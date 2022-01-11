#pragma once

#include "WrongAnimal.hpp"
#include <iostream>

class	WrongCat : virtual public WrongAnimal {

	public:
		WrongCat();
		WrongCat( WrongCat const & b );
		~WrongCat();

		WrongCat	&operator=( WrongCat const & b );
};
