#include <Intern.hpp>

Intern::Intern() {}

Intern::Intern( Intern const & b ) {

	*this = b;
}

// Intern	&Intern::operator=( Intern const & b ) {

// 	*this = b;

// 	return *this;
// }

Form	*Intern::makeForm( std::string const & name, std::string const & target ) {

	std::string const	formName[3] = {
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"};

	Form *(*form[3])( std::string const & target ) = {
		&ShrubberyCreationForm::create,
		&RobotomyRequestForm::create,
		&PresidentialPardonForm::create
		};

	try {
		for (int i = 0; i < 3; ++i) {
			if (name == formName[i]) {
				std::cout << "Intern creates " << name << std::endl;
				return form[i](target);
			}
		}
	}
	catch (std::exception &e) {
		throw Intern::FormNotKnownException();
	}
	return nullptr;
}

char const	*Intern::FormNotKnownException::what() const throw() {

	return "form not known";
}
