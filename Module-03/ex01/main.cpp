#include "ScavTrap.hpp"

int	main() {

	ScavTrap	a( "Loki" );

	a.attack( "Thor" );
	a.takeDamage(100);
	a.beRepaired(3);
	a.guardGate();
}
