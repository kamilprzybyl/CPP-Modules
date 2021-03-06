#include <Brain.hpp>

Brain::Brain() {

	std::cout << "Brain:		default constructor has been called" << std::endl;
}

Brain::Brain( Brain const & b ) {

	std::cout << "Brain:		copy constructor has been called" << std::endl;
	*this = b;
}

Brain::~Brain() {

	std::cout << "Brain:		destructor has been called" << std::endl;
}

Brain	&Brain::operator=( Brain const & b ) {

	for (int i = 0; i < 100; i++) {
		this->ideas[i] = b.ideas[i];
	}

	return *this;
}
