#include <Dog.hpp>

Dog::Dog() {

	std::cout << "Dog:		default constructor has been called" << std::endl;
	this->type = "Dog";
}

Dog::Dog( Dog const & b ) {

	std::cout << "Dog:		copy constructor has been called" << std::endl;
	*this = b;
}

Dog::~Dog() {

	std::cout << "Dog:		destructor has been called" << std::endl;
}

Dog	&Dog::operator=( Dog const & b ) {

	this->type = b.type;

	return *this;
}
