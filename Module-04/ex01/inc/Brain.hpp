#pragma once

#include <iostream>

class	Brain {

	protected:
		std::string	ideas[100];

	public:
		Brain();
		Brain( Brain const & b );
		virtual ~Brain();

		Brain	&operator=( Brain const & b );
};
