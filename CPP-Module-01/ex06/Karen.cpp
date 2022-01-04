#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void	Karen::debug( void ) {

	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I just love it!" << std::endl << std::endl;
}

void	Karen::info( void ) {

	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
	std::cout << "You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void	Karen::warning( void ) {

	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
					
}

void	Karen::error( void ) {

	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
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

		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		case (0):
			debug();
		case (1):
			info();
		case (2):
			warning();
		case (3):
			error();
	}
}
