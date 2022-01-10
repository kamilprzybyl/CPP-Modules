#include "Animal.hpp"

Animal::Animal() {

	std::cout << "Animal:		default constructor has been called" << std::endl;
	this->type = "Animal";
}

Animal::Animal( Animal const & b ) {

	std::cout << "Animal:		copy constructor has been called" << std::endl;
	*this = b;
}

Animal::~Animal() {

	std::cout << "Animal:		destructor has been called" << std::endl;
}

Animal	&Animal::operator=( Animal const & b ) {

	this->type = b.type;

	return *this;
}

void	Animal::makeSound( void ) {

	std::cout << "I am " << this->type << std::endl;
}

std::string	Animal::getType( void ) {

	return this->type;
}