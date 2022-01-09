#include "FragTrap.hpp"

FragTrap::FragTrap() {

	std::cout << "FragTrap default constructor has been called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap( std::string const name ) {

	std::cout << "FragTrap constructor has been called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap( FragTrap const & b ) {

	std::cout << "FragTrap copy constructor has been called" << std::endl;
	*this = b;
}

FragTrap	&FragTrap::operator=( FragTrap const & b ) {

	ClapTrap::operator=(b);
	return *this;
}

FragTrap::~FragTrap() {

	std::cout << "FragTrap destructor has been called" << std::endl;
}

void	FragTrap::highFivesGuys( void ) {

	std::cout << "HighFiveGuys has been called" << std::endl;
}
