#pragma once

#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

class Bureaucrat;

class	Form {

	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradeToSign;
		int const			_gradeToExec;

	public:
		Form();
		Form( std::string const name, int const gradeToSign, int const gradeToExec );
		Form ( Form const & b );
		virtual ~Form();

		Form	&operator=( Form const & b );

		std::string			getName() const;
		int					getGradeToSign() const;
		int					getGradeToExec() const;
		bool				getSigned();
		void				beSigned( Bureaucrat const & bureaucrat);

		class GradeTooHighException : public std::exception {

			public:
				virtual const char*	what() const throw();
		};

		class GradeTooLowException : public std::exception {

			public:
				virtual const char*	what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& os, const Form& b);
