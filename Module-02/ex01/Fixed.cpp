#include "Fixed.hpp"

Fixed::Fixed() {

	std::cout << "Default constructor called" << std::endl;
	this->_fixPointNum = 0;
}

Fixed::Fixed( const int num ) {

	std::cout << "Int constructor called" << std::endl;
	this->_fixPointNum = num << this->_fractBit;
}

Fixed::Fixed( const float num ) {

	std::cout << "Float constructor called" << std::endl;
	this->_fixPointNum = roundf(num * (1 << this->_fractBit));
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

std::ostream &operator<<( std::ostream& os, const Fixed& b )
{
	os << b.toFloat();

	return os;
}

int		Fixed::getRawBits() const {

	std::cout << "getRawBits member function called" << std::endl;

	return this->_fixPointNum;
}

void	Fixed::setRawBits( int const raw ) {

	this->_fixPointNum = raw;
}

int		Fixed::toInt( void ) const {

	return this->_fixPointNum >> this->_fractBit;
}

float	Fixed::toFloat( void ) const {

	return (float)this->_fixPointNum / (1 << this->_fractBit);
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}