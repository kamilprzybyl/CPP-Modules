#pragma once

#include <iostream>
#include <cmath>

class	Fixed {

	private:
		int					_fixPointNum;
		static const int	_fractBit = 8;

	public:
		Fixed();
		Fixed( int const num );
		Fixed( float const num );
		Fixed( Fixed const &a );
		~Fixed();

		Fixed	&operator=( Fixed const &a );
		bool	operator>( Fixed const &a );
		bool	operator<( Fixed const &a );
		bool	operator>=( Fixed const &a );
		bool	operator<=( Fixed const &a );
		bool	operator==( Fixed const &a );
		bool	operator!=( Fixed const &a );
		Fixed	operator+( Fixed const &a );
		Fixed	operator-( Fixed const &a );
		Fixed	operator*( Fixed const &a );
		Fixed	operator/( Fixed const &a );
		Fixed	&operator++( void );
		Fixed	&operator--( void );
		Fixed	operator++( int );
		Fixed	operator--( int );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;
};

std::ostream	&operator<<( std::ostream &os, Fixed const &a );
