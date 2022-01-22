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

	if (dynamic_cast<A *>(&p)) {
		std::cout << "A" << std::endl;
	}
	if (dynamic_cast<B *>(&p)) {
		std::cout << "B" << std::endl;
	}
	if (dynamic_cast<C *>(&p)) {
		std::cout << "C" << std::endl;
	}
}

int	main() {

	Base	*random = generate();
	identify(random);
	identify(*random);
}
