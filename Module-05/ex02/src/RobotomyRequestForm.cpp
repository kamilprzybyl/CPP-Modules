#include <RobotomyRequestForm.hpp>

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : _target(target) {}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & b ) : Form(b) {

	this->_target = b._target;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm	&RobotomyRequestForm::operator=( RobotomyRequestForm const & b ) {

	Form::operator=(b);
	this->_target = b._target;

	return *this;
}

void	RobotomyRequestForm::action( std::string target ) {

	std::cout << "some drilling noises" << std::endl;
	std::cout << target << " has been robotomized successfully 50% ofthe time" << std::endl;
}