#include "../inc/Dog.hpp"

Dog::Dog() {

	std::cout << "Dog:		default constructor has been called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog( Dog const & b ) {

	std::cout << "Dog:		copy constructor has been called" << std::endl;
	this->_brain = new Brain();
	*this = b;
}

Dog::~Dog() {

	std::cout << "Dog:		destructor has been called" << std::endl;
	delete this->_brain;
}

Dog	&Dog::operator=( Dog const & b ) {

	std::cout << "Dog:		assignation operator has been called" << std::endl;
	this->type = b.type;
	*this->_brain = *b._brain;

	return *this;
}

void	Dog::makeSound( void ) const {

	std::cout << "I am " << this->type << std::endl;
}
