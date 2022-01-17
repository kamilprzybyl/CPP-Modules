#pragma once

#include <iostream>
#include <Form.hpp>

class	PresidentialPardonForm : public Form {

	private:
		std::string	_target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const & b );
		~PresidentialPardonForm();

		PresidentialPardonForm	&operator=( PresidentialPardonForm const & b );

		void	action( std::string target ) const;
};
