#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void	Karen::debug( void ) {

	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info( void ) {

	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning( void ) {

	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error( void ) {

	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

static const std::string	levels[] = {

	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR"
};

static int	getLevel( std::string level ) {

	int	i = 0;
	while (i < 4) {

		if (level == levels[i]) {

			return (i);
		}
		i++;
	}

	return (i);
}

void	Karen::complain( std::string level ) {

	switch (getLevel(level)) {

		case (0):
			debug();
			break;
		case (1):
			info();
			break;
		case (2):
			warning();
			break;
		case (3):
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
