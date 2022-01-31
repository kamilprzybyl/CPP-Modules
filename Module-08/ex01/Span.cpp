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

unsigned int	Span::shortestSpan() {

	if (_arr.size() <= 1) {
		throw Span::noSpanFound();
	}

	std::vector<int> copy = _arr;
	std::vector<int>::iterator it = ++copy.begin();
	std::sort(copy.begin(), copy.end());

	return *it - copy.front();
}

unsigned int	Span::longestSpan() {

	if (_arr.size() <= 1) {
		throw Span::noSpanFound();
	}

	std::vector<int> copy = _arr;
	std::sort(copy.begin(), copy.end());

	return copy.back() - copy.front();
}

char const	*Span::alreadyStored::what() const throw() {

	return "N elements already stored";
}

char const	*Span::noSpanFound::what() const throw() {

	return "no span can be found";
}
