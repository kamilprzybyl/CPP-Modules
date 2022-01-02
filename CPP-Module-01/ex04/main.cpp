#include "Sed.hpp"

int	main(int argc, char **argv) {

	if (argc != 4) {

		return 1;
	}

	Sed::replace(argv[1], argv[2], argv[3]);

	return 0;
}