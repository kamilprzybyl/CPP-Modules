#pragma once

#include "Fixed.hpp"

class	Point {

	private:
		Fixed const	_x;
		Fixed const	_y;

	public:
		Point( void );
		Point( Point const &b );
		Point( Fixed const &x, Fixed const &y );

		Point	&operator=( Point const &b );

		Fixed const	&getX( void );
		Fixed const	&getY( void );

		~Point();
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);
