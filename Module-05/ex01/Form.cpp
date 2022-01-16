#include "Form.hpp"

Form::Form() : _name(), _signed(false), _gradeToSign(), _gradeToExec()  {}

Form::Form( std::string const name, int const gradeToSign, int const gradeToExec ) : _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {

	if (_gradeToExec < 1 || _gradeToSign < 1) {
		throw Form::GradeTooHighException();
	}
	else if (_gradeToExec > 150 || _gradeToExec > 150) {
		throw Form::GradeTooLowException();
	}
}

Form::Form( Form const & b )  : _name(b._name), _signed(b._signed), _gradeToSign(b._gradeToSign), _gradeToExec(b._gradeToExec) {}

Form::~Form() {}

Form	&Form::operator=( Form const & b ) {

	this->_signed = b._signed;

	return *this;
}

std::string			Form::getName() const { return _name; }
int					Form::getGradeToSign() const { return _gradeToSign; }
int					Form::getGradeToExec() const { return _gradeToExec; }
bool				Form::getSigned() { return _signed; }

void	Form::beSigned( Bureaucrat const & bureaucrat ) {

	if (bureaucrat.getGrade() > this->_gradeToSign ) {
		throw Form::GradeTooLowException();
	}
	_signed = true;
}

char const	*Bureaucrat::GradeTooHighException::what() const throw() {

	return "grade too high";
}

char const	*Bureaucrat::GradeTooLowException::what() const throw() {

	return "grade too low";
}

std::ostream &operator<<( std::ostream& os, Form& b )
{
	os << std::cout << b.getName() << ", bureaucrat grade";

	return os;
}
