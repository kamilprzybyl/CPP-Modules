#include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade) {}

Bureaucrat::Bureaucrat( Bureaucrat const & b ) {

	*this = b;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat	&Bureaucrat::operator=( Bureaucrat const & b ) {

	this->_grade = b._grade;

	return *this;
}

std::string const	Bureaucrat::getName() const {

	return this->_name;
}

int					Bureaucrat::getGrade() {

	return this->_grade;
}

void				Bureaucrat::increment() {

	if (this->_grade - 1 >= 1) {

		this->_grade--;
	}
}

void				Bureaucrat::decrement() {

	if (this->_grade + 1 <= 150) {
		
		this->_grade++;
	}
}

std::ostream &operator<<( std::ostream& os, Bureaucrat& b )
{
	os << std::cout << b.getName() << ", bureaucrat grade" << b.getGrade();

	return os;
}
