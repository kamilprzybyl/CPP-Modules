#pragma once

#include <iostream>
#include <vector>

class	Span {

	private:
		std::vector<int>	_arr;
		unsigned int		_N;

	public:
		Span();
		Span( unsigned int N );
		Span( Span const & b );
		~Span();

		Span	&operator=( Span const & b );

		void			addNumber( int n );
		void			addNumber( std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end );
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

		class alreadyStored : public std::exception {
			
			public:
				char const	*what() const throw();
		};

		class noSpanFound : public std::exception {
			
			public:
				char const	*what() const throw();
		};
};
