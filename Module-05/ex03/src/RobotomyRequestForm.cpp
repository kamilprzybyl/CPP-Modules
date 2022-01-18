#include <RobotomyRequestForm.hpp>

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target() {}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & b ) : Form(b) {

	this->_target = b._target;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm	&RobotomyRequestForm::operator=( RobotomyRequestForm const & b ) {

	Form::operator=(b);
	this->_target = b._target;

	return *this;
}

void	RobotomyRequestForm::action() const {

	std::cout << "some drilling noises" << std::endl;
	std::cout << this->_target << " has been robotomized successfully 50% of the time" << std::endl;
}

Form	*RobotomyRequestForm::create(std::string const &target) {

	return new RobotomyRequestForm(target);
}
