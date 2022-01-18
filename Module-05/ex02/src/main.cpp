#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>

int	main() {

	try {

		Bureaucrat	bureaucrat( "kamil", 27 );
		Bureaucrat	dude( "DUDE", 1 );

		// ShrubberyCreationForm	shrubberyForm;
		// RobotomyRequestForm		robotomyForm;
		// PresidentialPardonForm	presidentialForm;

		ShrubberyCreationForm	shrubberyForm("28A");
		RobotomyRequestForm		robotomyForm("27B");
		PresidentialPardonForm	presidentialForm("15C");

		bureaucrat.signForm(shrubberyForm);
		bureaucrat.executeForm(shrubberyForm);
		bureaucrat.executeForm(robotomyForm);
		bureaucrat.signForm(robotomyForm);
		bureaucrat.executeForm(robotomyForm);
		bureaucrat.signForm(presidentialForm);
		bureaucrat.executeForm(presidentialForm);
		dude.signForm(presidentialForm);
		dude.executeForm(presidentialForm);
	}
	catch (std::exception & e) {

		std::cout << e.what() << std::endl; 
	}
}
