#include "Fixed.hpp"

Fixed::Fixed( void ): _fixPointNum(0) {}

Fixed::Fixed( int const num ): _fixPointNum(num << _fractBit) {}

Fixed::Fixed( float const num ): _fixPointNum(roundf(num * (1 << _fractBit))) {}

Fixed::Fixed( Fixed const &b ) {

	*this = b;
}

Fixed	&Fixed::operator=( Fixed const &b ) {

	this->_fixPointNum = b._fixPointNum;

	return *this;
}

bool	Fixed::operator>( Fixed const &b ) { return this->_fixPointNum > b._fixPointNum; }

bool	Fixed::operator<( Fixed const &b ) { return this->_fixPointNum < b._fixPointNum; }

bool	Fixed::operator>=( Fixed const &b ) { return this->_fixPointNum >= b._fixPointNum; }

bool	Fixed::operator<=( Fixed const &b ) { return this->_fixPointNum <= b._fixPointNum; }

bool	Fixed::operator==( Fixed const &b ) { return this->_fixPointNum == b._fixPointNum; }

bool	Fixed::operator!=( Fixed const &b ) { return this->_fixPointNum != b._fixPointNum; }

Fixed	Fixed::operator+( Fixed const &b ) {

	Fixed	res;

	res.setRawBits(this->_fixPointNum + b._fixPointNum);

	return res;
}

Fixed	Fixed::operator-( Fixed const &b ) {

	Fixed	res;

	res.setRawBits(this->_fixPointNum - b._fixPointNum);

	return res;
}

Fixed	Fixed::operator*( Fixed const &b ) {

	Fixed	res;

	res.setRawBits(this->_fixPointNum * b._fixPointNum / (1 << this->_fractBit));

	return res;
}

Fixed	Fixed::operator/( Fixed const &b ) {

	Fixed	res;

	res.setRawBits(this->_fixPointNum / b._fixPointNum * (1 << this->_fractBit));

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

std::ostream	&operator<<( std::ostream &os, Fixed const &b )
{
	os << b.toFloat();

	return os;
}

int		Fixed::getRawBits() const { return this->_fixPointNum; }

void	Fixed::setRawBits( int const raw ) { this->_fixPointNum = raw; }

int		Fixed::toInt( void ) const { return this->_fixPointNum >> this->_fractBit; }

float	Fixed::toFloat( void ) const { return (float)this->_fixPointNum / (1 << this->_fractBit); }

Fixed	&Fixed::min( Fixed &a, Fixed &b ) {

	if ((Fixed)a < (Fixed)b)
		return a;
	return b;
}

Fixed	&Fixed::max( Fixed &a, Fixed &b ) {

	if ((Fixed)a > (Fixed)b)
		return a;
	return b;
}

Fixed const	&Fixed::min( Fixed const &a, Fixed const &b ) {

	if ((Fixed)a < (Fixed)b)
		return a;
	return b;
}

Fixed const	&Fixed::max( Fixed const &a, Fixed const &b ) {

	if ((Fixed)a > (Fixed)b)
		return a;
	return b;
}

Fixed::~Fixed() {}
