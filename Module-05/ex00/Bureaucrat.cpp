#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade) {

	if (grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat( Bureaucrat const & b ) {

	*this = b;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat	&Bureaucrat::operator=( Bureaucrat const & b ) {

	_grade = b._grade;

	return *this;
}

std::string const	Bureaucrat::getName() const {

	return _name;
}

int					Bureaucrat::getGrade() {

	return _grade;
}

void				Bureaucrat::increment() {

	_grade--;
	if (_grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
}

void				Bureaucrat::decrement() {

	_grade++;
	if (_grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
}

char const	*Bureaucrat::GradeTooHighException::what() const throw() {

	return "grade too high";
}

char const	*Bureaucrat::GradeTooLowException::what() const throw() {

	return "grade too low";
}

std::ostream &operator<<( std::ostream& os, Bureaucrat& b )
{
	os << std::cout << b.getName() << ", bureaucrat grade" << b.getGrade();

	return os;
}
