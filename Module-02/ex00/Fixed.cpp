#include "Fixed.hpp"

Fixed::Fixed() {

	std::cout << "Default constructor called" << std::endl;
	this->_fixPointNum = 0;
}

Fixed::Fixed( const Fixed& other ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed&	Fixed::operator=( const Fixed& other ) {

	std::cout << "Assignation operator called" << std::endl;
	this->_fixPointNum = other._fixPointNum;
	return *this;
}

int		Fixed::getRawBits() const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixPointNum;
}

void	Fixed::setRawBits( int const raw ) {

	this->_fixPointNum = raw;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}
