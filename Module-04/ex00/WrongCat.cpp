#include "WrongCat.hpp"

WrongCat::WrongCat() {

	std::cout << "WrongCat:	default constructor has been called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat( WrongCat const & b ) {

	std::cout << "WrongCat:	copy constructor has been called" << std::endl;
	*this = b;
}

WrongCat::~WrongCat() {

	std::cout << "WrongCat:	destructor has been called" << std::endl;
}

WrongCat	&WrongCat::operator=( WrongCat const & b ) {

	this->type = b.type;

	return *this;
}
