#include "Fixed.hpp"

Fixed::Fixed() {

	this->_fixPointNum = 0;
}

Fixed::Fixed( int const num ) {

	this->_fixPointNum = num << this->_fractBit;
}

Fixed::Fixed( float const num ) {

	this->_fixPointNum = roundf(num * (1 << this->_fractBit));
}

Fixed::Fixed( Fixed const &other ) {

	*this = other;
}

Fixed&	Fixed::operator=( Fixed const &other ) {

	this->_fixPointNum = other._fixPointNum;

	return *this;
}

bool	Fixed::operator>( Fixed const &a ) {

	return this->_fixPointNum > a._fixPointNum;
}

bool	Fixed::operator<( Fixed const &a ) {

	return this->_fixPointNum < a._fixPointNum;
}

bool	Fixed::operator>=( Fixed const &a ) {

	return this->_fixPointNum >= a._fixPointNum;
}

bool	Fixed::operator<=( Fixed const &a ) {

	return this->_fixPointNum <= a._fixPointNum;
}

bool	Fixed::operator==( Fixed const &a ) {

	return this->_fixPointNum == a._fixPointNum;
}

bool	Fixed::operator!=( Fixed const &a ) {

	return this->_fixPointNum != a._fixPointNum;
}

Fixed	Fixed::operator+( Fixed const &a ) {

	Fixed	res;

	res.setRawBits(this->_fixPointNum + a._fixPointNum);

	return res;
}

Fixed	Fixed::operator-( Fixed const &a ) {

	Fixed	res;

	res.setRawBits(this->_fixPointNum - a._fixPointNum);

	return res;
}

Fixed	Fixed::operator*( Fixed const &a ) {

	Fixed	res;

	res.setRawBits(this->_fixPointNum * a._fixPointNum / (1 << this->_fractBit));

	return res;
}

Fixed	Fixed::operator/( Fixed const &a ) {

	Fixed	res;

	res.setRawBits(this->_fixPointNum / a._fixPointNum * (1 << this->_fractBit));

	return res;
}

Fixed	&Fixed::operator++( void ) {

	this->_fixPointNum += 1;
	return *this;
}

Fixed	&Fixed::operator--( void ) {

	this->_fixPointNum -= 1;
	return *this;
}

Fixed	Fixed::operator++( int ) {

	Fixed	tmp(*this);

	this->_fixPointNum += 1;
	return tmp;
}

Fixed	Fixed::operator--( int ) {

	Fixed	tmp(*this);

	this->_fixPointNum -= 1;
	return tmp;
}

std::ostream	&operator<<( std::ostream &os, Fixed const &fixPointNum )
{
	os << fixPointNum.toFloat();

	return os;
}

int		Fixed::getRawBits() const {

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

Fixed::~Fixed() {}
