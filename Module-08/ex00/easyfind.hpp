#pragma once

#include <iostream>

class NotFound : public std::exception {
	
	public:
		char const	*what() const throw() {

			return "not found";
		}
};

template<typename T>
typename T::iterator	easyfind( T &container, int n) {

	typename T::iterator	it = std::find(container.begin(), container.end(), n);

	if (it == container.end()) {
		throw NotFound();
	}

	return it;
}
