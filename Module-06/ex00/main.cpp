#include <iostream>
#include <Convert.hpp>

int	main(int argc, char **argv) {

	if (argc != 2) {
		std::cout << "invalid numer of arguments!" << std::endl;
		return 1;
	}

	Convert	convert(argv[1]);

	std::cout << convert;
}
