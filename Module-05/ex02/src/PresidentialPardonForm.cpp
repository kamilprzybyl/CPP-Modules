#include <PresidentialPardonForm.hpp>

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : _target(target) {}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & b ) : Form(b) {

	this->_target = b._target;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm	&PresidentialPardonForm::operator=( PresidentialPardonForm const & b ) {

	Form::operator=(b);
	this->_target = b._target;

	return *this;
}

void	PresidentialPardonForm::action( std::string target ) const {

	std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
