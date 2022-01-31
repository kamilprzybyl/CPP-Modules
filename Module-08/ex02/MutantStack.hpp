#pragma once

#include <iostream>
#include <stack>

template<class T>
class	MutantStack : public std::stack<T> {

	public:
		MutantStack() : std::stack<T>() {}
		MutantStack( MutantStack<T> const & b ) : std::stack<T>(b) {}
		~MutantStack() {}

		MutantStack<T>	&operator=( MutantStack<T> const & b ) {

			this->c = b.c;

			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator	iterator;

		iterator	begin() { return this->c.begin(); }
		iterator	end() { return this->c.end(); }
};
