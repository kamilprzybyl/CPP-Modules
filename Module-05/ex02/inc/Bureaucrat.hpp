#pragma once

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class	Bureaucrat {

	private:
		std::string const	_name;
		int					_grade;

	public:
		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const & b );
		~Bureaucrat();

		Bureaucrat	&operator=( Bureaucrat const & b );

		std::string		getName() const;
		int				getGrade() const;
		void			increment();
		void			decrement();
		void			signForm( Form & form );
		void			executeForm( Form const & form );

		class GradeTooHighException : public std::exception {

			public:
				virtual const char*	what() const throw();
		};

		class GradeTooLowException : public std::exception {

			public:
				virtual const char*	what() const throw();
		};
};

std::ostream&	operator<<(std::ostream &os, Bureaucrat const & b);
