#include "Span.hpp"
#include <iostream>

int	main() {

	Span sp = Span(5);

	try {

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}

	// Span s = Span(sp);
	// s.addNumber(43);
	// s.addNumber(9);
	// s.addNumber(11);

	// std::cout << s.shortestSpan() << std::endl;
	// std::cout << s.longestSpan() << std::endl;

	// Span f;

	// f = s;
	// std::cout << f.shortestSpan() << std::endl;
	// std::cout << f.longestSpan() << std::endl;

	// Span m = Span(10000);

	// std::vector<int> v;
	// for (int i = 0; i < 10000; i++) {
	// 	v.push_back(i);
	// }
	// try {
	// 	m.addNumber(v.begin(), v.end());
	// 	std::cout << m.shortestSpan() << std::endl;
	// 	std::cout << m.longestSpan() << std::endl;
	// }
	// catch ( std::exception &e ) {
	// 	std::cout << e.what() << std::endl;
	// }
}