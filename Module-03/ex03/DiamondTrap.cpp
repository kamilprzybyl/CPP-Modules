#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap() {

	std::cout << "DiamondTrap default constructor has been called" << std::endl;
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 50;
	this->FragTrap::_attackDamage = 30;
}

DiamondTrap::DiamondTrap( std::string const name ) {

	std::cout << "DiamondTrap constructor has been called" << std::endl;
	this->_name = name;
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 50;
	this->FragTrap::_attackDamage = 30;
}

DiamondTrap::DiamondTrap( DiamondTrap const & b ) {

	std::cout << "DiamondTrap copy constructor has been called" << std::endl;
	*this = b;
}

DiamondTrap::~DiamondTrap() {

	std::cout << "DiamondTrap destructor has been called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=( DiamondTrap const & b ) {

	FragTrap::operator=(b);

	return *this;
}

void	DiamondTrap::attack( std::string const & target ) {

	std::cout << "DiamondTrap " << this->_name << " attack " << target <<", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	DiamondTrap::whoAmI( void ) {

	std::cout << "My name is " << this->_name << std::endl;
}
