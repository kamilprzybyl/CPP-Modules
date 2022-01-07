#include "Point.hpp"

int	main( void ) {

	Point		obj;
	Point const	point( Fixed(1), Fixed(1) );
	Point const	a( Fixed(0), Fixed(0) );
	Point const	b( Fixed(0), Fixed(10) );
	Point const	c( Fixed(30), Fixed(10) );

	if (bsp(a, b, c, point) == true)
		std::cout << "kurwa" << std::endl;
	else
		std::cout << "kurwa no" << std::endl;


	return 0;
}
