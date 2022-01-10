#pragma once

#include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap {

	public:
		FragTrap();
		FragTrap( std::string const name );
		FragTrap( FragTrap const & b );

		FragTrap	&operator=( FragTrap const & b );

		void	highFivesGuys( void );

		~FragTrap();
};
