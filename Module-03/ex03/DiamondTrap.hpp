#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap {

	private:
		std::string	_name;

	public:
		DiamondTrap();
		DiamondTrap( std::string const name );
		DiamondTrap( DiamondTrap const & b );
		~DiamondTrap();

		DiamondTrap	&operator=( DiamondTrap const & b );

		void	attack( std::string const & target );
		void	whoAmI( void );
};
