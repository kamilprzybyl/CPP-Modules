#pragma once

#include <iostream>
#include <Form.hpp>

class	ShrubberyCreationForm : public Form {

	private:
		std::string	_target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const & b );
		~ShrubberyCreationForm();

		ShrubberyCreationForm	&operator=( ShrubberyCreationForm const & b );

		void	action() const;
};
