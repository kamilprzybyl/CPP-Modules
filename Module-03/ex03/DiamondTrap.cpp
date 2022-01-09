#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {

	std::cout << "DiamondTrap default constructor has been called" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap( std::string const name ) {

	std::cout << "DiamondTrap constructor has been called" << std::endl;
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
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

void	DiamondTrap::takeDamage( unsigned int amount ) {

	std::cout << this->_name << " took " << amount << " of damage" << std::endl;
	this->_hitPoints -= amount;
}

void	DiamondTrap::beRepaired( unsigned int amount ) {

	std::cout << this->_name << " got " << amount << " of energy points" << std::endl;
	this->_energyPoints += amount;
}

void	DiamondTrap::whoAmI( void ) {

	std::cout << "whoAmI has been called" << std::endl;
}