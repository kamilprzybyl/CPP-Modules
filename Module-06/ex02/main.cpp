#include <Base.hpp>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <A.hpp>
#include <B.hpp>
#include <C.hpp>

Base	*generate( void ) {

	srand (time(NULL));
	switch (rand() % 3) {

		case 0: return new A();
		case 1: return new B();
		case 2: return new C();

		default: return nullptr;
	}
}

/*	dynamic_cast < new-type > ( expression )
	If the cast is successful, dynamic_cast returns a value of type new-type.
	If the cast fails and new-type is a pointer type, it returns a null pointer of that type. */

void	identify( Base* p ) {

	if (dynamic_cast<A *>(p)) {
		std::cout << "A" << std::endl;
	}
	if (dynamic_cast<B *>(p)) {
		std::cout << "B" << std::endl;
	}
	if (dynamic_cast<C *>(p)) {
		std::cout << "C" << std::endl;
	}
}

void	identify( Base& p ) {

	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception const &e) {

	}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::exception const &e) {

	}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::exception const &e) {

	}
}

int	main() {

	Base	*random = generate();

	std::cout << "ref:		";
	identify(random);
	std::cout << "pointer:	";
	identify(*random);
}
