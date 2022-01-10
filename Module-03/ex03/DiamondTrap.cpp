#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {

	std::cout << "DiamondTrap:		default constructor has been called" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap( std::string const name ) {

	std::cout << "DiamondTrap:		name constructor has been called" << std::endl;
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap( DiamondTrap const & b ) {

	std::cout << "DiamondTrap:		copy constructor has been called" << std::endl;
	*this = b;
}

DiamondTrap::~DiamondTrap() {

	std::cout << "DiamondTrap:		destructor has been called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=( DiamondTrap const & b ) {

	FragTrap::operator=(b);

	return *this;
}

void	DiamondTrap::attack( std::string const & target ) {

	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( void ) {

	std::cout << "DiamondTrap: whoAmI:	" << this->_name << std::endl;
}
