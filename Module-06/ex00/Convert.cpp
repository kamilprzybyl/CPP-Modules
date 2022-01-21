#include <Convert.hpp>

Convert::Convert( std::string type ) : _type(type) {}

// Convert::Convert( Convert const & b ) {

// 	*this = b;
// }

Convert::~Convert() {}

// Convert	&Convert::operator=( Convert const & b ) {

// 	this->_type = b._type;

// 	return *this;
// }

char	Convert::toChar() const {

int	c;
	try {
		c = stoi(this->_type);
	}
	catch (std::exception & e) {
		throw Convert::impossible();
	}
	if (c < 0 || c > 255) {
		throw Convert::impossible();
	}
	if (!isprint(c)) {
		throw Convert::nonDisplayable();
	}

	return static_cast<char>(c);
}

int		Convert::toInt() const {

	int	n = stoi(this->_type);
	// if ()
	// try {
	// 	std::cout << "int: " << n << std::endl;
	// }
	// catch (std::exception &e) {
	// 	std::cout << "int: " << std::endl;
	// }
	return n;
}

float	Convert::toFloat() const {

	float f = std::stof(this->_type);

	// try {
	// 	std::cout << "float: " << f << ".0" << std::endl;
	// }
	// catch (std::exception &e) {
	// 	std::cout << "float: " << std::endl;
	// }

	return f;
}

double	Convert::toDouble() const {

	double d = std::stod(this->_type);
	// try {
	// 	std::cout << "double: " << d << ".0" << std::endl;
	// }
	// catch (std::exception &e) {
	// 	std::cout << "double: " << std::endl;
	// }
	return d;
}

char const	*Convert::nonDisplayable::what() const throw() {

	return "non displayable";
}

char const	*Convert::impossible::what() const throw() {

	return "impossible";
}

std::ostream &operator<<( std::ostream &os, Convert const & b )
{

	os << "char: ";
	try {
		char	c = b.toChar();
		os << c << std::endl;
	}
	catch (std::exception &e) {
		os << e.what() << std::endl;
	}
	os << "int: ";
	try {
		int	n = b.toInt();
		os << n << std::endl;
	}
	catch (std::exception &e) {
		os << e.what() << std::endl;
	}
	os << "float: ";
	try {
		float	f = b.toFloat();
		os << f << ".0" << std::endl;
	}
	catch (std::exception &e) {
		os << e.what() << std::endl;
	}
	os << "double: ";
	try {
		int	d = b.toDouble();
		os << d << ".0" << std::endl;
	}
	catch (std::exception &e) {
		os << e.what() << std::endl;
	}

	return os;
}
