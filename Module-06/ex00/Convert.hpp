#pragma once

#include <iostream>
#include <cmath>

class	Convert {

	private:
		std::string	_type;

	public:
		Convert( std::string type );
		Convert( Convert const & b );
		~Convert();

		Convert	&operator=( Convert const & b );

		char	toChar() const;
		int		toInt() const;
		float	toFloat() const;
		double	toDouble() const;

		class impossible : public std::exception {

			public:
				virtual const char*	what() const throw();
		};

		class nonDisplayable : public std::exception {

			public:
				virtual const char*	what() const throw();
		};
};

std::ostream&	operator<<(std::ostream &os, Convert const & b);
