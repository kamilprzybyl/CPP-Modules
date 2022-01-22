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

	try {
		int c = stoi(this->_type);
		if (c < 0 || c > 255) {
			throw Convert::impossible();
		}
		if (!isprint(c)) {
			throw Convert::nonDisplayable();
		}
		return static_cast<char>(c);
	}
	catch (std::exception & e) {
		throw Convert::impossible();
	}

}

int		Convert::toInt() const {

	try {
		int	n = stoi(this->_type);
		return n;
	}
	catch (std::exception &e) {
		throw Convert::impossible();
	}
}

float	Convert::toFloat() const {


	try {
		float f = std::stof(this->_type);
		return f;
	}
	catch (std::exception &e) {
		throw Convert::impossible();
	}

}

double	Convert::toDouble() const {

	try {
		double d = std::stod(this->_type);
		return d;
	}
	catch (std::exception &e) {
		throw Convert::impossible();
	}
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
		if (std::isnan(f) && std::signbit(f))
			os << "-";
		os << f;
		if (!std::isnan(f) && f - (int)f == 0)
			os << ".0";
		os <<"f" << std::endl;
	}
	catch (std::exception &e) {
		os << e.what() << std::endl;
	}
	os << "double: ";
	try {
		double	d = b.toDouble();
		if (std::isnan(d) && std::signbit(d))
			os << "-";
		os << d;
		if (!std::isnan(d) && d - (int)d == 0)
			os << ".0";
		os << std::endl;
	}
	catch (std::exception &e) {
		os << e.what() << std::endl;
	}

	return os;
}
