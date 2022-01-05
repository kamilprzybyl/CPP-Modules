#include "Fixed.hpp"

Fixed::Fixed(): _fixedPointVal(0) {}

Fixed::~Fixed() {}

int		Fixed::getRawBits() const {return this->_fixedPointVal;}

void	Fixed::setRawBits( int const raw ) {

	this->_fixedPointVal = raw;
}
