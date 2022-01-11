#include <Cat.hpp>

Cat::Cat() {

	std::cout << "Cat:		default constructor has been called" << std::endl;
	this->type = "Cat";
}

Cat::Cat( Cat const & b ) {

	std::cout << "Cat:		copy constructor has been called" << std::endl;
	*this = b;
}

Cat::~Cat() {

	std::cout << "Cat:		destructor has been called" << std::endl;
}

Cat	&Cat::operator=( Cat const & b ) {

	this->type = b.type;

	return *this;
}
