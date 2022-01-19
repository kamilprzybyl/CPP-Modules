#include <iostream>
#include <limits>

int	main(int argc, char **argv) {

	if (argc != 2) {
		std::cout << "invalid numer of arguments!" << std::endl;
		return 1;
	}
	std::cout << "char: " << argv[1] << std::endl;
	std::cout << "int: " << atoi(argv[1]) << std::endl;
	std::string fs(argv[1]);
	float f = std::stof(fs);
	// typedef std::numeric_limits< double > dbl;
	// std::cout.precision(dbl::max_digits10);
	std::cout << "float: " << std::fixed << f << std::endl;
	// std::string f(argv[1]);
	double x = strtod(argv[1], NULL);
	std::cout << "double: " << x << std::endl;
}
