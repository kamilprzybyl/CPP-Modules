#pragma once

#include <iostream>

class	Fixed {

	private:
		int					_fixPointNum;
		static const int	_fractBit = 8;

	public:
		Fixed();
		Fixed( const Fixed& other );
		Fixed&	operator=( const Fixed& other );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		~Fixed();
};
