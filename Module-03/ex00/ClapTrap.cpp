#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) {

	std::cout << "Constructor has been called" << std::endl;
	this->_name = name;
}

ClapTrap::~ClapTrap() {

	std::cout << "Destructor has been called" << std::endl;
}

void	ClapTrap::attack( std::string const & target ) {

	std::cout << "ClapTrap " << this->_name << " attack " << <target> <<", causing " << <damage> << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {

	std::cout << this->_name << " took " << amount << " of damage" << std::endl;
	this->_hitPoints -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount ) {

	std::cout << this->_name << " got " << amount << " of energy points" << std::endl;
	this->_energyPoints += amount;
}
