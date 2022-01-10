#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {

	std::cout << "ScavTrap:		default constructor has been called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap( std::string const name ) {

	std::cout << "ScavTrap:		constructor has been called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap( ScavTrap const & b ) {

	std::cout << "ScavTrap:		copy Constructor has been called" << std::endl;
	*this = b;
}

ScavTrap::~ScavTrap() {

	std::cout << "ScavTrap:		destructor has been called" << std::endl;
}

ScavTrap	&ScavTrap::operator=( ScavTrap const & b ) {

	ClapTrap::operator=(b);

	return *this;
}

void	ScavTrap::attack( std::string const & target ) {

	std::cout << "ScavTrap:		" << this->_name << " attack " << target <<", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate( void ) {
	
	std::cout << "ScavTrap:		guardGate has been called" << std::endl;
}
