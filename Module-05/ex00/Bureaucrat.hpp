#pragma once

#include <iostream>
#include <exception>

class	Bureaucrat {

	class GradeTooHighException : public std::exception {

		public:
			virtual const char*	what() const throw();
	};

	class GradeTooLowException : public std::exception {

		public:
			virtual const char*	what() const throw();
	};

	private:
		std::string const	_name;
		int					_grade;

	public:
		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const & b );
		~Bureaucrat();

		Bureaucrat	&operator=( Bureaucrat const & b );

		std::string const	getName() const;
		int					getGrade() const;

		void				increment();
		void				decrement();
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& b);
