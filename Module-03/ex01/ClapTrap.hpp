#pragma once

#include <iostream>

class	ClapTrap {

	protected:
		std::string		_name;
		int				_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

	public:
		ClapTrap();
		ClapTrap( std::string const name );
		ClapTrap( ClapTrap const & b );
		~ClapTrap();

		ClapTrap	&operator=( ClapTrap const & b );

		void	attack( std::string const & target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
};
