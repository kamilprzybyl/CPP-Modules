#pragma once

#include <iostream>
#include <Form.hpp>

class	RobotomyRequestForm : public Form {

	private:
		std::string	_target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const & b );
		~RobotomyRequestForm();

		RobotomyRequestForm	&operator=( RobotomyRequestForm const & b );

		void	action() const;
};
