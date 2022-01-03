#include "Karen.hpp"

static const std::string	levels[] = {

	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR"
};

static int	getLevel( std::string level ) {

	for (int i = 0; i < 4; i++) {

		if (level.compare(levels[i]) == 0) {

			return (i);
		}
	}

	return (5);
}

int	main(int argc, char **argv) {

	if (argc != 2) {

		return 1;
	}

	Karen	karen;

	std::string str(argv[1]);

	switch (getLevel(argv[1])) {

		case (0):
			karen.complain(levels[0]);
		case (1):
			karen.complain(levels[1]);
		case (2):
			karen.complain(levels[2]);
		case (3):
			karen.complain(levels[3]);
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}

	return 0;
}