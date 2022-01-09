#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {

	std::cout << "A default constructor has been called" << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap( std::string const name ) {

	std::cout << "Constructor has been called" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap( ClapTrap const & b ) {

	std::cout << "Copy Constructor has been called" << std::endl;
	*this = b;
}

ClapTrap::~ClapTrap() {

	std::cout << "Destructor has been called" << std::endl;
}

ClapTrap	&ClapTrap::operator=( ClapTrap const & b ) {

	std::cout << "Assignation operator has been called" << std::endl;
	this->_name = b._name;
	this->_hitPoints = b._hitPoints;
	this->_energyPoints = b._energyPoints;
	this->_attackDamage = b._attackDamage;

	return *this;
}

void	ClapTrap::attack( std::string const & target ) {

	std::cout << "ClapTrap " << this->_name << " attack " << target <<", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {

	std::cout << this->_name << " took " << amount << " of damage" << std::endl;
	this->_hitPoints -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount ) {

	std::cout << this->_name << " got " << amount << " of energy points" << std::endl;
	this->_energyPoints += amount;
}
