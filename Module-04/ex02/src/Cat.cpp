#include "../inc/Cat.hpp"

Cat::Cat() {

	std::cout << "Cat:		default constructor has been called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat( Cat const & b ) {

	std::cout << "Cat:		copy constructor has been called" << std::endl;
	this->_brain = new Brain();
	*this = b;
}

Cat::~Cat() {

	std::cout << "Cat:		destructor has been called" << std::endl;
	delete this->_brain;
}

Cat	&Cat::operator=( Cat const & b ) {

	std::cout << "Cat:		assignation operator has been called" << std::endl;
	this->type = b.type;
	*this->_brain = *b._brain;

	return *this;
}
