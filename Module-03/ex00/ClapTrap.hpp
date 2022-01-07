#pragma once

#include <iostream>

class	ClapTrap {

	private:
		std::string	_name;
		int			_hitPoints = 10;
		int			_energyPoints = 10;
		int			_attackDamage = 10;

	public:
		ClapTrap( std::string name );
		~ClapTrap();

		void	attack( std::string const & target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
};
