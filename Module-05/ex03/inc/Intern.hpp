#pragma once

#include <iostream>
#include <Form.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>

class	Intern {

	public:
		Intern();
		Intern( Intern const & b );

		// Intern	&operator=( Intern const & b );

		Form	*makeForm( std::string const & name, std::string const & target );

		class FormNotKnownException : public std::exception {

			public:
				virtual const char*	what() const throw();
		};
};
