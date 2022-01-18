#include <PresidentialPardonForm.hpp>

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target() {}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & b ) : Form(b) {

	this->_target = b._target;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm	&PresidentialPardonForm::operator=( PresidentialPardonForm const & b ) {

	Form::operator=(b);
	this->_target = b._target;

	return *this;
}

void	PresidentialPardonForm::action() const {

	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

Form	*PresidentialPardonForm::create(std::string const &target) {

	return new PresidentialPardonForm(target);
}
