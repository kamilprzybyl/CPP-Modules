#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <Intern.hpp>
#include <Form.hpp>

int	main() {

	Intern	someRandomIntern;

	Form	*a = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
	Form	*b = someRandomIntern.makeForm("RobotomyRequestForm", "????");
	Form	*c = someRandomIntern.makeForm("PresidentialPardonForm", "EASY");
	Form	*d = someRandomIntern.makeForm("invalidForm", "NAH!");

	a->action();
	b->action();
	c->action();
	d->action(); // should seg fault
}
