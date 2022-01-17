#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>

int	main() {

	try {

		Bureaucrat	bureaucrat( "kami", 27 );

		ShrubberyCreationForm  shrubberyCreationForm("him");
		bureaucrat.signForm(shrubberyCreationForm);
	}
	catch (std::exception & e) {

		std::cout << e.what() << std::endl; 
	}
}
