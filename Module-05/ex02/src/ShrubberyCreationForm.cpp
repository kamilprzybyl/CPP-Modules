#include <ShrubberyCreationForm.hpp>
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & b ) : Form(b) {

	this->_target = b._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( ShrubberyCreationForm const & b ) {

	Form::operator=(b);
	this->_target = b._target;

	return *this;
}

void	ShrubberyCreationForm::action( std::string target ) const {

	std::ofstream	file(target + "_shrubbery");

	file << "ASCII trees" << std::endl;
	file.close();
}
