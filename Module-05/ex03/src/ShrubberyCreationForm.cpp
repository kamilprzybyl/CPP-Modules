#include <ShrubberyCreationForm.hpp>
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target() {}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & b ) : Form(b) {

	this->_target = b._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( ShrubberyCreationForm const & b ) {

	Form::operator=(b);
	this->_target = b._target;

	return *this;
}

void	ShrubberyCreationForm::action() const {

	std::ofstream	file(this->_target + "_shrubbery");

	file << "ASCII trees" << std::endl;
	file.close();
}

Form	*ShrubberyCreationForm::create( std::string const &target ) {

	return new ShrubberyCreationForm(target);
}
