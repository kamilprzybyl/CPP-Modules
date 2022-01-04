#pragma once

class	Fixed {

	private:
		int					_fixedPointVal;
		static const int	_numOfBits;

	public:
		Fixed( int fixedPointVal );
		~Fixed();
		Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};
