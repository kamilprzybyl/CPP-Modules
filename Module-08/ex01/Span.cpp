#include "Span.hpp"

Span::Span() : _N() {}

Span::Span( unsigned int N ) : _N(N) {}

Span::Span( Span const & b ) {

	_arr = b._arr;
	_N = b._N;
}

Span::~Span() {}

Span	&Span::operator=( Span const & b ) {

	if (this != &b) {
		_arr = b._arr;
		_N = b._N;
	}

	return *this;
}

void	Span::addNumber( int n ) {

	if (_arr.size() == _N) {
		throw Span::alreadyStored();
	}

	_arr.push_back(n);
}

void	Span::addNumber( std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end ) {

	for (std::vector<int>::iterator it = begin; it != end; it++) {
		if (_arr.size() == _N) {
			throw Span::alreadyStored();
		}
		_arr.push_back(*it);
	}
}

int	Span::shortestSpan() {

	std::vector<int>::iterator it = _arr.begin();
	std::vector<int>::iterator it2 = ++_arr.begin();
	int min = abs(*it2 - *it);
	for (it = _arr.begin(); it != _arr.end(); it++) {
		for ( it2 = it + 1; it2 != _arr.end(); it2++) {
			if (abs(*it2 - *it) < min) {
				min = abs(*it2 - *it);
			}
		}
	}

	return min;
}

int	Span::longestSpan() {

	if (_arr.size() <= 1) {
		throw Span::noSpanFound();
	}

	int max = 0;
	for (std::vector<int>::iterator it = _arr.begin(); it != _arr.end(); it++) {
		for (std::vector<int>::iterator it2 = it + 1; it2 != _arr.end(); it2++) {
			if (abs(*it2 - *it) > max) {
				max = abs(*it2 - *it);
			}
		}
	}

	return max;
}

char const	*Span::alreadyStored::what() const throw() {

	return "N elements already stored";
}

char const	*Span::noSpanFound::what() const throw() {

	return "no span can be found";
}
