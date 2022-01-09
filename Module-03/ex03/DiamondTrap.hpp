#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class	DiamondTrap : ScavTrap, FragTrap {

	private:
		std::string	_name;

	public:
		DiamondTrap();
		DiamondTrap( std::string const name );
		DiamondTrap( DiamondTrap const & b );
		~DiamondTrap();

		DiamondTrap	&operator=( DiamondTrap const & b );

		void	whoAmI( void );
};
