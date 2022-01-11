#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {

	std::cout << "WrongAnimal:	default constructor has been called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal( WrongAnimal const & b ) {

	std::cout << "WrongAnimal:	copy constructor has been called" << std::endl;
	*this = b;
}

WrongAnimal::~WrongAnimal() {

	std::cout << "WrongAnimal:	destructor has been called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=( WrongAnimal const & b ) {

	this->type = b.type;

	return *this;
}

void	WrongAnimal::makeSound( void ) const {

	std::cout << "I am " << this->type << std::endl;
}

std::string	WrongAnimal::getType( void ) const {

	return this->type;
}
