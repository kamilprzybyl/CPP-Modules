#pragma once

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

	public:
		ScavTrap();
		ScavTrap( std::string const name );
		ScavTrap( ScavTrap const & b );
		~ScavTrap();

		ScavTrap	&operator=( ScavTrap const & b );

		void	attack( std::string const & target );
		void	guardGate( void );
};
